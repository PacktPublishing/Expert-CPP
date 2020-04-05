//file ch4_5_class_template_implicit_inst_v2.h
#ifndef __CH4_5_H__ 
#define __CH4_5_H__ 
#include <iostream>
template <class T>
class X {
public:
	X() = default;
	~X() = default;
	void f() { std::cout << "X::f()" << std::endl; };
	void g() { blabla; };
};
#endif

