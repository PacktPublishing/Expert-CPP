void calc_square_roots(std::vector<double>& vec) 
{
  for (auto& elem : vec) {
    elem = std::sqrt(elem);
  }
}

int main()
{
  std::vector<double> vec{1.1, 2.2, 4.3, 5.6, 2.4};
  calc_square_roots(vec);
}