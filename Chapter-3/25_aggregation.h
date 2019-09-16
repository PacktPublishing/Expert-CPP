class Person; // forward declaration
class Engine { /* code omitted for brevity */ };
class Car {
public:
  Car();
  // ...
private:
  Person* driver_; // aggregation
  std::vector<Person*> passengers_; // aggregation
  Engine engine_; // composition
  // ...
}; 