void print_sorted() {
  short* arr{new short[420]};
  for (int ix = 0; ix < 420; ++ix) {
    std::cin >> arr[ix];
  }
  std::sort(arr, arr + 420);
  for (int ix = 0; ix < 420; ++ix) {
    std::cout << arr[ix];
  }
  delete arr; // very bad!
}