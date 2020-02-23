int CalculationMachine::calculate(int a, int b)
{
  // fptr_ points to the sum() function
  return fptr_(a, b);
}