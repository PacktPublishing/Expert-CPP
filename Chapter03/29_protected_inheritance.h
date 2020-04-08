class Vector {
public:
  Vector();
  Vector(const Vector&);
  Vector(Vector&&);
  Vector& operator=(const Vector&);
  Vector& operator=(Vector&&);
  ~Vector();

public:
  void push_back(int value);
  void insert(int index, int value);
  void remove(int index);
  int operator[](int index);
  int size() const;
  int capacity() const;

private:
  int size_;
  int capacity_;
  int* array_;
};

class Stack : protected Vector {
public:
  // constructors, assignment operators and the destructor are omitted for brevity
  void push(int value) {
    push_back(value);
  }
  int pop() {
    int value{this[size() - 1]};
    remove(size() - 1);
    return value;
  }
};

class AdvancedStack : public Stack {
  // can use the Vector
};
