class Warehouse {
public:
  static create_instance() {
    if (instance_ == nullptr) {
      instance_ = new Warehouse();
    }
    return instance_;
  }

  static remove_instance() {
    delete instance_;
    instance_ = nullptr;
  }

private:
  Warehouse() = default;

private:
  static Warehouse* instance_ = nullptr;
};

int main()
{
  Warehouse* w = Warehouse::create_instance();
  Product book;
  w->add_product(book);
  Warehouse::remove_instance();
}