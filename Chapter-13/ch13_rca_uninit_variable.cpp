//ch13_uninit_variable.cpp
#include <iostream>
int main()
{
	bool x;
	// ...            //do something else
	if (x) {
		std::cout << "do A x=" << x << std::endl;
	}
	else {
		std::cout << "do B x=" << x << std::endl;
	}
	return 0;
}