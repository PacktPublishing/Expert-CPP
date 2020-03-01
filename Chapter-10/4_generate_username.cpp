int get_random_number() 
{ 
  // TODO: Implement random number generation.
  return 1;
}

std::string generate_username(const std::string& email) 
{
  int num = get_random_number();
  std::string local_part = email.substr(0, email.find('@'));
  return local_part + std::to_string(num);
}
