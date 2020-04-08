//ch4_4_class_template_explicit.cpp
#include <iostream>

using namespace std;
template <typename T>
struct A {
	A(T init) : val(init) {}
	virtual T foo();
	T val;
};

template <class T> //T in this line is template parameter
T A<T>::foo() {    //the 1st T refers to function return type, the T in <> specifies that this
				   //function's template parameter is also the class template parameter
	return val;
}

extern template struct A<int>;
#if 0               //set 1 rebuild it                
int A<int>::foo() { //line A
	return val+1;   //line B
}                   //Line C
#endif                                   

int main(void) {
	A<double> x(5);
	A<int> y(5);
	cout << "fD="<<x.foo() <<", fI="<< y.foo() << endl;
	return 0;
}