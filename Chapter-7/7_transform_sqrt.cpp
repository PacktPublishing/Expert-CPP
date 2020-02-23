#include <ranges>
#include <vector>

int main()
{
  std::vector<double> vec{1.1, 2.2, 4.3, 5.6, 2.4};
  auto result = vec | std::ranges::views::transform(std::sqrt);
}