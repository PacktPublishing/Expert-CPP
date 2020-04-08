#include <iostream>

void print_sorted() {
  short* arr{new short[4]};
  for (int ix = 0; ix < 4; ++ix) {
    std::cin >> arr[ix];
    if (arr[ix] < 0) return;
  }
  std::sort(arr, arr + 4);
  for (int ix = 0; ix < 4; ++ix) {
    std::cout << arr[ix] << " ";
    if (arr[ix] < 0) return;
  }
  std::cout << std::endl;
  delete[] arr;
}

int main() {
    print_sorted();
}
