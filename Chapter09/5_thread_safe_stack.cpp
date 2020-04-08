template <typename T>
class safe_stack
{
public:
  safe_stack() {}
  safe_stack(const safe_stack& other) {
    std::lock_guard<std::mutex> lock(other.mutex_);
    wrappee_ = other.wrappee_;
  }
  void push(T value) {
    std::lock_guard<std::mutex> lock(mutex_);
    // note how we std::move the value
    wrappee_.push(std::move(value));
  }
  void pop() {
    std::lock_guard<std::mutex> lock(mutex_);
    if (wrappee_.empty()) {
        throw std::exception("The stack is empty");
    }
    std::shared_ptr<T> top_element{std::make_shared<T>(std::move(wrappee_.top()))};
    wrappee_.pop();
    return top_element;
  }

  bool empty() const { return wrappee_.empty(); }

private:
  std::stack<T> wrappee_;
  mutable std::mutex mutex_;
};
