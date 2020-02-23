struct User
{
  int age;
  string name;
  string phone_number;
  string email;
};

void update_age(User& u)
{
  u.age = u.age + 1;
}

User pure_update_age(const User& u) // cannot modify the input argument
{
  User tmp{u};
  tmp.age = tmp.age + 1;
  return tmp;
}

User pure_update_age(User u) // u is the copy of the passed object
{
  u.age = u.age + 1;
  return u;
}

int main()
{
    User john{.age{21}, .name{"John"}};

    auto updated{pure_update_age(john)};
    std::cout << updated.age; // prints 22

    updated = pure_update_age(john);
    std::cout << updated.age; // prints 22
}