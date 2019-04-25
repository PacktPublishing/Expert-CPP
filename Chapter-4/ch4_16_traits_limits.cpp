//ch4_16_traits_limits.cpp
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	cout << "is_signed(char): " << numeric_limits<char>::is_signed << endl;
	cout << "is_specialized(long double): "
		<< numeric_limits<long double>::is_specialized << endl;
	cout << "is_specialized(std::string): "
		<< numeric_limits<std::string>::is_specialized << endl;
	cout << "int: is_specialized=" << numeric_limits<int>::is_specialized;
	cout << ", min=" << numeric_limits<int>::min();
	cout << ", max=" << numeric_limits<int>::max() << endl;
	cout << "uint32_t: is_specialized=" << numeric_limits<uint32_t>::is_specialized;
	cout << ", min=" << numeric_limits<uint32_t>::min();
	cout << ", max=" << numeric_limits<uint32_t>::max() << endl;
	return 0;
}