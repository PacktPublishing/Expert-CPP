class QuadraticSolver {
public:
  QuadraticSolver() = default;
  void set_a(double a);
  void set_b(double b);
  void set_c(double c);
  void find_discriminant();
  double solve(); // solve and return the x
private:
  double a_;
  double b_;
  double c_;
  double discriminant_;
};

QuadraticSolver solver;
solver.set_a(2);
solver.set_b(5);
solver.set_c(-8);
solver.find_discriminant();
std::cout << "x is: " << solver.solve() << std::endl;

