#include <iostream>

int main(int argc, char** argv) {
  std::cout << "The number of passed arguments is: " << argc << std::endl;
  std::cout << "Arguments are: " << std::endl;
  for (int ix = 1; ix < argc; ++ix) {
    std::cout << argv[ix] << std::endl;
  }

  return 0;
}
