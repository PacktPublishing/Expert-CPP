std::vector<double> pure_calc_square_roots(const std::vector<double>& vec)
{
  std::vector<double> new_vector;
  for (const auto& elem : vec) {
    new_vector.push_back(std::sqrt(elem));
  }
  return new_vector;
}