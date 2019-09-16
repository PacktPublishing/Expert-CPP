class Warehouse {
public:
  // constructors omitted for brevity
  Warehouse(Warehouse&& src)
    : size_{src.size_}, 
      capacity_{src.capacity_},
      products_{src.products_}
  {
    src.size_ = 0;
    src.capacity_ = 0;
    src.products_ = nullptr;
  }
};