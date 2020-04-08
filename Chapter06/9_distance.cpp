template <typename Iter>
std::size_type distance(Iter first, Iter second) {
  if (Iter is a random_access_iterator) {
    return second - first; 
  }
  std::size_type count = 0;
  for ( ; first != last; ++count, first++) {}
  return count;
}
