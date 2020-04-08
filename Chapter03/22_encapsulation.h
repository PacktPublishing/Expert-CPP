class Warehouse {
public:
  // rather naive implementation
  void set_size(int sz) {
    if (sz < 1) throw std::invalid_argument("Invalid size");
    size_ = sz;
  }
  // code omitted for brevity
private:
  int size_;
};