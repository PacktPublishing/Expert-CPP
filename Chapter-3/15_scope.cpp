class Product {
public:
  Product() = default;
  // ...
};

static Product global_prod;

Product* foo() {
  Product* heap_prod = new Product();
  heap_prod->name = "Sample";
  return heap_prod;
}

int main() {
  Product stack_prod;
  if (true) {
    Product tmp;
    tmp.rating = 3;
  }
  stack_prod.price = 4.2;
  foo();
}