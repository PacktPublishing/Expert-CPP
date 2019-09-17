class big_object {};

void make_changes(big_object& b);

void error_prone()
{
  big_object b;
  std::thread t{make_changes, b};
  t.join();
  // do something else
}

int main()
{
  std::thread t{make_changes, std::ref(b)};
}