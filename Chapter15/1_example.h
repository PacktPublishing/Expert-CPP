struct Example
{
  int input1;
  int input 2;
  int output;
};

class CalculationMachine
{
public:
  using Examples = std::vector<Example>;
  // pass calculation examples through the setExamples()
  void setExamples(const Examples& examples);

  // the main function of interest
  // returns the result of the calculation
  int calculate(int a, int b);

private:
  // this function pointer will point to 
  // one of the arithmetic functions below
  int (*fptr_)(int, int) = nullptr;

private:
  // set of arithmetic functions
  static int sum(int, int);
  static int subtract(int, int);
  static int multiply(int, int);
  static int divide(int, int);
};