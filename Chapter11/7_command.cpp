class Command
{
public:
  Command() : called_(0) {}

  void operator()() {
    ++called_;
    std::cout << "I'm a smart function." << std::endl;
    std::cout << "I've been called << called_ " << " times." << std::endl;
  }

private:
  int called_;
};

int main()
{
  Command c1;
  Command c2;
  c1();
  c1();
  c2();
  c2();
  c2();
}