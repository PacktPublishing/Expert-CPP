template <typename T>
int search(const std::vector<T>& vec, const T& item)
{
  for (int ix = 0; ix < vec.size(); ++ix) {
    if (vec[ix] == item) {
      return ix;
    }
  }
  return -1; // not found
}
