int main()
{
  double pi{3.14}; // lvalue
  int x{42}; // lvalue
  int y{x}; // lvalue
  int& ref{x}; // lvalue-reference
}