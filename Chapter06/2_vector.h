template <typename T>
class Vector
{
public:
  Vector() : buffer_{nullptr}, capacity_{2}, size_{0}
  {
    buffer_ = new T[capacity_]; // initializing an empty array
  }
  ~Vector() { delete [] buffer_; }
  // code omitted for brevity

public:
  void push_back(const T& item)
  {
    if (size_ == capacity_) {
      // resize
    }
    buffer_[size_++] = item;
  }
  // code omitted for brevity
};
