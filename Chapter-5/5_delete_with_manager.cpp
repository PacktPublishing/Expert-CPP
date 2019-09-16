template <typename T>
class ArrayManager {
public:
  ArrayManager(T* arr) : arr_{arr} {}
  ~ArrayManager() { delete[] arr_; }

  T& operator[](int ix) { return arr_[ix]; }

  T* raw() { return arr_; }
};

void print_sorted() {
  ArrayManager<short> arr{new short[420]};
  for (int ix = 0; ix < 420; ++ix) {
    std::cin >> arr[ix];
  }
  strange_sort::sort(arr.raw(), arr.raw() + 420);
  for (int ix = 0; ix < 420; ++ix) {
    std::cout << arr[ix];
  }
}
