//ch4_4_class_template_explicit.cpp
#include <iostream>

using namespace std;
template <typename T>
struct A {
	A(T init) : val(init) {}
	virtual T foo();
	T val;
};


template <class T>   //T in this line is template parameter
T A<T>::foo() {       //the 1st T refers to function return type, the T in <> specifies that this
					  //function's template parameter is also the class template parameter
	cout << val << endl;
	return val;
}

extern template int A<int>::foo();

int main(void) {
	int x = A<int>(55).foo();
	return x;
}