template <typename T>
class LinkedList 
{
  // code omitted for brevity
public:
  void push_front(const T& item) 
  {
    node<T>* new_node = new node<T>{item};
    if (head_ != nullptr) {
      new_node->next = head_->next;
      if (head_->next != nullptr) {
        head_->next->prev = new_node;
      }
    }
    new_node->next = head_;
    head_ = new_node;
  }
private:
  node<T>* head_; 
};
