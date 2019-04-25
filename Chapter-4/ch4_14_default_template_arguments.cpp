//ch4_14_default_template_arguments.cpp
#include <iostream>
#include <typeinfo>
template<class T1, class T2 = int> class X;
template<class T1 = float, class T2> class X;

template<class T1, class T2> class X {
public:
	T1 a;
	T2 b;
};

template<class T = char> class Y;
template<class T> class Y 
{  public: 
	T a;
};

int main() { 
	X<int> x1;			//<int,int>
	X<float>x2;			//<float,int>
	X<>x3;				//<float,int>
	X<double, char> x4;	//<double, char>
	std::cout << typeid(x1.a).name() << ", " << typeid(x1.b).name() << std::endl;
	std::cout << typeid(x2.a).name() << ", " << typeid(x2.b).name() << std::endl;
	std::cout << typeid(x3.a).name() << ", " << typeid(x3.b).name() << std::endl;
	std::cout << typeid(x4.a).name() << ", " << typeid(x4.b).name() << std::endl;
	return 0;
}