std::string generate_username(const std::string& email)
{
  int num = get_random_number();
  std::string local_part = email.substr(0, email.find('@'));
  return local_part + num;
}