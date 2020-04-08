#include <iterator>
#include <type_traits>

template <typename Iter>
typename std::iterator_traits<Iter>::difference_type distance(Iter first, Iter last)
{
  using category = std::iterator_traits<Iter>::iterator_category;
  if constexpr (std::is_same_v<category, std::random_access_iterator_tag>) {
    return last - first;
  }
  typename std::iterator_traits<Iter>::difference_type count;
  for (; first != last; ++count, first++) {}
  return count;
}
