#include <mutex>
std::mutex locker;
void inc() {
  locker.lock();
  global = global + 1;
  locker.unlock();
}

int main()
{
  std::thread t1{inc};
  std::thread t2{inc};
} 
