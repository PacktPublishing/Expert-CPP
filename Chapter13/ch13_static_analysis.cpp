 //ch13_static_analysis.cpp
#include <iostream>
int *getPointer(void)
{
  return 0;
}

int &getVal() {
	int x = 5;
	return x;
}

int main()
{
  int *x = getPointer();
  if( x> 0 ){
      *x = 5;
  }
  else{
	  std::cout << "x is null" << std::endl;  
  }  
 
  int &y = getVal();
  std::cout << y << std::endl;

  return 0;
}

