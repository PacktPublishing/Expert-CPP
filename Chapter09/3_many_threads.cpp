#include <thread>

int counter = 0;

void foo()
{
  counter++;
}

int main()
{
  std::jthread A{foo};
  std::jthread B{foo};
  std::jthread C{[]{foo();}};
  std::jthread D{
    []{
      for (int ix = 0; ix < 10; ++ix) { foo(); }
    }
  };
}