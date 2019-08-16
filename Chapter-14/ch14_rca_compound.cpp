//ch14_rca_compound.cpp
#include <iostream>
int f(int x, int y)
{
	return x*y;
}

int main()
{
	int x = 3;
	std::cout << f(++x, x) << std::endl;  //bad,f(4,4) or f(4,3)?
}