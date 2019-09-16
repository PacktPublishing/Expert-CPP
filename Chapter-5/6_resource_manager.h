template <typename T>
class ResourceManager {
public:
  ResourceManager(T* ptr) : ptr_{ptr} {}
  ~ResourceManager() { delete ptr_; }

  T& operator*() { return *ptr_; }
  T* operator->() { return ptr_; }
};
