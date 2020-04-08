struct Product {
  std::string name;
  double price;
  int rating;
  bool available;
};

void initialize(Product* p) {
  p->price = 0.0;
  p->rating = 0;
  p->available = false;
}

void set_name(Product* p, const std::string& name) {
  p->name = name;
}

std::string get_name(Product* p) {
  return p->name;
}

void set_price(Product* p, double price) {
  if (price < 0 || price > 9999.42) return;
  p->price = price;
}

double get_price(Product* p) {
  return p->price;
}

int main() {
  Product cpp_book;
  initialize(&cpp_book);
  set_name(&cpp_book, "Mastering C++ Programming");
  std::cout << "Book title is: " << get_name(&cpp_book);
  // ...
}