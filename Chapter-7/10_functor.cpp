class Function
{
public:
  void modify_state(int a) {
    state_ = a;
  }

  int get_state() {
    return state_;
  }

  void operator()() {
    // do something that a function would do
  }
private:
  int state_;
};

void foo(Function f)
{
  f();
  // some other useful code
}