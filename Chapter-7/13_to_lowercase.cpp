std::string str = "lowercase";
std::transform(str.begin(), str.end(), str.begin(), 
  [](unsigned char c) { return std::toupper(c); });
std::cout << str; // "LOWERCASE"