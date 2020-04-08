void test_set_email()
{
  std::string valid_email = "valid@email.com";
  std::string invalid_email = "112%$";
  User u;
  u.set_email(valid_email);
  u.set_email(invalid_email);
}
