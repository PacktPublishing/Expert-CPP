struct Product
{
  int price;
  bool available;
  std::string title;
};

class ProductComparator
{
public:
  bool operator()(const Product& a, const Product& b) {
    return a.price > b.price;
  }
};

int main()
{
  std::vector<Product> products;
  products.push_back({5, false, "Product 1"});
  products.push_back({12, true, "Product 2"});

  std::sort(products.begin(), products.end(), ProductComparator{});

  std::sort(products.begin(), products.end(), 
  [](const Product& a, const Product& b) { return a.price > b.price; })
}
