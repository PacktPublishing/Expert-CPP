template <typename Iter, typename T>
int search(Iter first, Iter last, const T& elem)
{
  for (std::size_t count = 0; first != last; first++, ++count) {
    if (*first == elem) return count;
  }
  return -1;
}
