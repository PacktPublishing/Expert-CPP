#include <memory>

struct Product
{
  // ...
};

void print_name(std::unique_ptr<Product> apple) {
  std::cout << apple->name();
}

int main()
{
  std::unique_ptr<Product> res{new Product};
  res->set_name("Red apple");


  std::unique_ptr<Product> res{new Product};
  res->set_name("Red apple");
  print_name(res);
  res->set_price(0.42);
}
