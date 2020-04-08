struct Product {
  std::string name_;
  bool available_;
  double price_;
  int rating_;
};

void Product_constructor(Product&); // we forced the compiler to generate the default constructor
void Product_copy_constructor(Product& this, const Product&);
void Product_move_constructor(Product& this, Product&&);
Product& operator=(Product& this, const Product&); // default implementation
Product& operator=(Product& this, Product&&); // default implementation

void Product_set_name(const std::string&);
std::string Product_name(const Product& this); // takes const because the method was declared const
void Product_set_availability(Product& this, bool b);
bool Product_availability(const Product& this);

std::ostream& operator<<(std::ostream&, const Product&);
std::istream& operator>>(std::istream&, Product&);