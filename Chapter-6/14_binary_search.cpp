template <typename T>
std::size_t binsearch(const std::vector<T>& vec, const T& item, int start, int end)
{
  if (start > end) return -1;
  int mid = start + (end - start) / 2;
  if (vec[mid] == item) {
    return mid; // found
  }
  if (vec[mid] > item) {
    return binsearch(vec, item, start, mid - 1);
  }
  return binsearch(vec, item, mid + 1, end);
}
