#include <thread>
#include <mutex>

int counter = 0;
std::mutex m;

void foo()
{
  std::lock_guard g{m};
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