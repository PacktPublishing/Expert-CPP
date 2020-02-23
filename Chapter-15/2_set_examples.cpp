void CalculationMachine::setExamples(const Examples& examples)
{
  int sum_count{0};
  int sub_count{0};
  int mul_count{0};
  int div_count{0};
  for (const auto& example : Examples) {
    if (CalculationMachine.sum(example.input1, example.input2) == example.output) {
      ++sum_count;
    }
    if (CalculationMachine.subtract(example.input1, example.input2) == example.output) {
      ++sub_count;
    }
    // the same for multiply() and divide()
  }

  // the function that has the maximum number of correct output results
  // becomes the main function for called by calculate()
  // fptr_ is assigned the winner arithmetic function
}