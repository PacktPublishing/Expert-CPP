void test_set_email()
{
  std::string valid_email = "valid@email.com";
  std::string invalid_email = "112%$";

  User u;
  u.set_email(valid_email);
  if (u.get_email() == valid_email) {
    std::cout << "Success: valid email has been set successfully" << std::endl;
  } else {
    std::cout << "Fail: valid email has not been set" << std::endl;
  }

  try {
    u.set_email(invalid_email);
    std::cerr << "Fail: invalid email has not been rejected" << std::endl;
  } catch (std::exception& e) {
    std::cout << "Success: invalid email rejected" << std::endl;
  }
}