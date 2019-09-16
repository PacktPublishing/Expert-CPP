template <typename T>
struct tree_node
{
  T item;
  tree_node<T>* left;
  tree_node<T>* right;
};
