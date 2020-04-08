typedef  void (*PF)(int);
void foo(int arg) 
{
  // do something with arg
}

int bar(int arg, PF f)
{
  f(arg);
  return arg;
}

bar(42, foo);