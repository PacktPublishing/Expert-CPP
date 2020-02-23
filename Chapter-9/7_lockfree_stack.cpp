template <typename T>
class lock_free_stack
{
private:
  struct node {
    T data;
    node* next;
    node(const T& d) : data(d) {}
  }

public:
    void push(const T& data)
    {
        node* new_elem = new node(data);
        new_elem->next = head_.load();
        while (!head_.compare_exchange_weak(new_elem->next, new_elem));
    }

    void pop(T& popped_element)
    {
        node* old_head = head_.load();
        while (!head_.compare_exchange_weak(old_head, old_head->next));
        popped_element = old_head->data;
    }

private:
  std::atomic<node*> head_;
  node* head_;
// the rest of the body is omitted for brevity
};
