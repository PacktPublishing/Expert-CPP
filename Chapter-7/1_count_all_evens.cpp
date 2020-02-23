#include <vector>
#include <iostream>

using IntMatrix = std::vector<std::vector<int>>;

std::vector<int> count_all_evens(const IntMatrix& numbers)
{
  int even{0};
  std::vector<int> even_numbers_count;
  for (const auto& number_line: numbers) {
    for (const auto& number: number_line) {
      if (number % 2 == 0) {
        ++even;
      }
    }
    even_numbers_count.push_back(even);
    even = 0;
  }
  return even_numbers_count;
}

int main()
{
    IntMatrix m{{1, 2, 3}, {4, 5, 6}};
    for (auto item : count_all_evens(m)) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}