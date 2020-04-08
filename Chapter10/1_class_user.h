#include <regex>
#include <string>
#include <stdexcept>


struct Address
{
  std::string country;
  std::string city;
  std::string street;
  float latitude;
  float longitude;
};

class User
{
public:
    void User::set_email(const std::string& email)
    {
        if (!std::regex_match(email, "(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+") {
            throw std::invalid_argument("Invalid email");
        }
        
        this->email_ = email;
    }
private:
  std::string email_;
  Address address_;
};
