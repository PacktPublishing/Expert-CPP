class my_string
{
public:
  my_string();
  // code omitted for brevity

public:
  void insert(char ch);
  // code omitted for brevity

private:
  char* buffer_;
  int size_;
  int capacity_;
};
