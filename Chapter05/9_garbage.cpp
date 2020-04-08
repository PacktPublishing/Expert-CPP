struct Garbage {
  char ch;
  int i;
};

void foo() {
  Garbage* g1 = new Garbage();
  if (true) {
    Garbage* g2 = new Garbage();
  }
}

int main() {
  static Garbage* g3 = new Garbage();
}
