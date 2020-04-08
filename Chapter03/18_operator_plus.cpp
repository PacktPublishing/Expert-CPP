// considering declared as friend in the Warehouse class
Warehouse operator+(const Warehouse& a, const Warehouse& b) {
  Warehouse sum; // temporary
  sum.size_ = a.size_ + b.size_;
  sum.capacity_ = a.capacity_ + b.capacity_;
  sum.products_ = new Product[sum.capacity_];
  for (int ix = 0; ix < a.size_; ++ix) { sum.products_[ix] = a.products_[ix]; }
  for (int ix = 0; ix < b.size_; ++ix) { sum.products_[a.size_ + ix] = b.products_[ix]; }
  return sum;
}