//ch4_22_polymorphism_metaprogramming.cpp
#include <iostream>
template <class D> struct B {
	void ui() {
		static_cast<D*>(this)->alg();
	}
};

struct D : B<D> {
	void alg() {
		std::cout << "D::alg()" << std::endl;
	}
};

int main() {
	B<D> b;
	b.ui();
	return 0;
}
