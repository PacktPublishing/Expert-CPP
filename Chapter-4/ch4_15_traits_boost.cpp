//ch4_15_traits_boost.cpp
#include <iostream>
#include <type_traits>

struct X {};
using namespace std;
int main()
{
	cout << boolalpha;
	cout << is_void<void>::value << endl;
	cout << is_void<int>::value << endl;
	cout << is_pointer<X *>::value << endl;
	cout << is_pointer<X>::value << endl;
	cout << is_pointer<X &>::value << endl;
	cout << is_pointer<int *>::value << endl;
	cout << is_pointer<int **>::value << endl;
	cout << is_pointer<int[10]>::value << endl;
	cout << is_pointer< nullptr_t>::value << endl;
}
