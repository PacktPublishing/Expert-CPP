//ch13_gdb_3.cpp
#include <iostream>
#include <algorithm>
void foo( const int n )
{
  int* p = (int *)malloc(n * sizeof(int) );
  //for( int i=0; i<n;++i){
  //  p[i] = rand()%n;
  //}

  //std::sort(p, p+n);
  for (int i=0; i<n; ++i) {
     std::cout << p[i] << ",";
  } 
  std::cout << "p=" << p << std::endl;

  free(p); 
}

int main() 
{
  foo(10);
  //foo(5);
  return 0;
}

