#include <vector>
#include <iostream>

using IntMatrix = std::vector<std::vector<int>>;

int count_evens(const std::vector<int>& number_line) {
  return std::count_if(number_line.begin(), 
       number_line.end(), [](int num){return num % 2 == 0;});
}

std::vector<int> count_all_evens(const IntMatrix& numbers)
{
  std::vector<int> even_numbers_count;
  for (const auto& number_line: numbers) {
    even_numbers_count.push_back(count_evens(number_line));
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