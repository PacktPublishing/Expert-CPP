#include <queue>
#include <thread>

class ThreadPool
{
public:
  ThreadPool(int number_of_threads = 1000) {
    for (int ix = 0; ix < number_of_threads; ++ix) {
      pool_.push(std::thread());
    }
  }

  std::thread get_free_thread() {
    if (q.empty()) {
      throw std::exception("no available thread");
    }
    auto t = q.front();
    q.pop();
    return t;
  }

  void push_thread(std::thread t) {
    q.push(t);
  }

private:
  std::queue<std::thread> pool_;
};
