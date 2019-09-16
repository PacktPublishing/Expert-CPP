struct Product {
  std::string name;
  double price;
  int rating;
  bool available;
};

void set_rating(Product* p, int r) {
  if (r >= 1 && r <= 5) {
    p->rating = r;
  }
  // otherwise ignore
}

int main()
{
  Product cpp_book;
  set_rating(&cpp_book, -12); // won't change the state
}
