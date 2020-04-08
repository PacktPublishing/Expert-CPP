class GarbageCollector {
public:
  template <typename T>
  static T* allocate() { 
    T* ptr = new T();
    objects_[ptr] = true;
    return ptr;
  }

  static void deallocate(T* p) {
    if (objects_[p]) {
      objects_[p] = false;
      delete p;
    }
  }

private:
  std::unordered_map<T*, bool> objects_;
};
