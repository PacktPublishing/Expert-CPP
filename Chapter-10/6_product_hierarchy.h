class Product
{
public:
  // code omitted for brevity
  virtual double convert_price(Currency c) {
    auto final_price = apply_discount();
    // convert the final_price based on the currency
  }

private:
  virtual double apply_discount() {
    return getPrice(); // no discount by default
  }

  // code omitted for brevity
};

class DigitalProduct : public Product
{
public:
  // code omitted for brevity

private:
  double apply_discount() override {
    return getPrice() * 0.12;
  }
  
  // code omitted for brevity
};