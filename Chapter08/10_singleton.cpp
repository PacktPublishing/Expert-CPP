class MySingleton
{
public:
  static MySingleton* get_instance() {
    if (instance_ == nullptr) {
      std::lock_guard lg{mutex_};
      if (instance_ == nullptr) {
        instance_ = new MySingleton();
      }
    }
    return instance_;
  }

  // code omitted for brevity
private:
  std::mutex mutex_;
  static MySingleton* instance_;
}
