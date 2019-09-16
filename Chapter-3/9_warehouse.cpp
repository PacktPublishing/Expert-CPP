struct Warehouse {
  Product* products;
  int capacity;
  int size;
};

void initialize_warehouse(Warehouse* w) {
  w->capacity = 1000;
  w->size = 0;
  w->products = new Product[w->capacity];
  for (int ix = 0; ix < w->capacity; ++ix) {
    initialize(&w->products[ix]); // initialize each Product object
  }
}

void set_size(int size) { ... }
// code omitted for brevity