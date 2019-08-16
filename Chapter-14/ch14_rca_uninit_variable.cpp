//ch14_uninit_variable.cpp
#include <iostream>
int main()
{
	bool x;
	// ...            //do something else
	if (x) {
		std::cout << "do A" << std::endl;
	}
	else {
		std::cout << "do B" << std::endl;
	}
	return 0;
}