class Warehouse {
public:
  // ...
  Warehouse(const Warehouse& rhs) {
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    products_ = new Product[capacity_];
    for (int ix = 0; ix < size_; ++ix) {
      products_[ix] = rhs.products_[ix];
    }
  }
  // code omitted for brevity
};  