#include <thread>

class TestTask
{
public:
  TestTask() : state{0} 
  {}

  void operator()() {
    state++;
  }
  
private:
  int state;
};

int main() {
  std::thread t{TestTask()};
  t.join();
}
