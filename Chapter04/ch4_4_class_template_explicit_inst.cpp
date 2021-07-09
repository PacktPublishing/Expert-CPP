//------------------------------------------------------------------------
//ch4_4_class_template_explicit.cpp
//Note: the original code and its explanations on page 133-134 is inaccuracy. 
//      please use the comments in this file to understand the concept of
//      explicit instantiation definition
//      and
//      explicit instantiation declaration 
//
// To build:
//    use: g++ -std=gnu++11 ch4_4_class_template_explicit_inst.cpp
//
// I applogy for the inaccuracy of the original presentation in the book. 
//
// ---Shunguang wu, 07/02/2021      	
//------------------------------------------------------------------------
#include <iostream>

//explicit instantiation declaration means we do not want to 
//instantiate such type in a template, you can set this flag 
//to 1 to save some compile time
#define USE_EXPLICIT_INST_DECLARATION_4_INT 0

using namespace std;
template <typename T>
struct A {
	A(T init=0) : val(init) {}
	virtual T foo();
	T val;
};

template <class T> //T in this line is template parameter
T A<T>::foo() {    //the 1st T refers to function return type, the T in <> specifies that this
				   //function's template parameter is also the class template parameter
	return val;
}

//explicit instantiation definitation, it forces instantiation of struct A for <doubel> type
template struct A<double>;

#if USE_EXPLICIT_INST_DECLARATION_4_INT
	//explicit instantiation decalration of struct A for <int> type
	//if we do not want to use A<int>, the explicit instantiation decalration
	//could save some compile time for real world big projects
	extern template struct A<int>;
#else
	//explicit instantiation definitation for <int> 
	template struct A<int>;
#endif


int main(void) {
	A<double> x(5.1);

#if !USE_EXPLICIT_INST_DECLARATION_4_INT
	A<int> y(5);
	cout << "fD="<<x.foo() <<", fI="<< y.foo() << endl;
#else
	cout << "fD="<<x.foo() << endl;
#endif

	return 0;
}
