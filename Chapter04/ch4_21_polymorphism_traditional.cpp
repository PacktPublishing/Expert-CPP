//ch4_21_polymorphism_traditional.cpp
#include <iostream>
class B {
public:
	B() = default;
	virtual void alg() { std::cout << "alg() in B"; }
};

class D : public B {
public:
	D() = default;
	virtual void alg() { std::cout << "alg() in D"; }
};

int main()
{
	B *p = new D(); //derived object pointer p as an instance pointer of the base class
	p->alg(); //outputs "alg() in D"
	delete p;
	return 0;
}