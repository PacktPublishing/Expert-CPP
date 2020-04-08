class thread_RAII
{
public:
  explicit thread_RAII(std::thread& t)
    : thread_{t}
  {}

  ~thread_RAII() {
    thread_.join();  
  }

private:
  std::thread thread_;
};

void foo() {
  std::cout << "Testing thread join";
}

int main() {
  std::thread t{foo};
  thread_RAII r{t};
  // will automatically join the thread
}
