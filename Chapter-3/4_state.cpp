struct Product {
  std::string name;
  double price;
  int rating;
  bool available;
};

int main()
{
  Product cpp_book; // declaring the object
  // changing the state of the object cpp_book
  cpp_book.available = true;
  cpp_book.rating = 5;
}
