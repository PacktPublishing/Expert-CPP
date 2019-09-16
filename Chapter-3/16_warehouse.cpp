class Product;

class Warehouse {
public:
  Warehouse() 
    : size_{0}, capacity_{1000}, products_{nullptr}
  {
    products_ = new Products[capacity_];
  }

  ~Warehouse() {
    delete [] products_;
  }

public:
  void add_product(const Product& p) {
    if (size_ == capacity_) { /* resize */ }
    products_[size_++] = p;
  }
  // other functions omitted for brevity

private:
  int size_;
  int capacity_;
  Product* products_;
};

int main() {
  Warehouse w1;
  Product book;
  Product apple;
  // ...assign values to products (omitted for brevity)
  w1.add_product(book);
  Warehouse w2 = w1; // copy
  w2.add_product(apple);
  // something somewhere went wrong...
}