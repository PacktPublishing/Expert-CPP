class thread_RAII
{
public:
  explicit thread_RAII(std::thread& t)
    : thread_{t}
  {}

  ~thread_RAII()
  {
    if (thread_.joinable()) {
      thread_.join();
    }
  }
private:
  std::thread thread_;
};
