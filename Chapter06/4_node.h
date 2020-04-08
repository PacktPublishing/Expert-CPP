template <typename T>
struct node 
{
  node(const T& it) : item{it}, next{nullptr}, prev{nullptr} {}
  T item;
  node<T>* next;
  node<T>* prev;
};
