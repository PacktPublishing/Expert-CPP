//ch4_18_factorial_metaprogramming.cpp
#include <iostream>
//define a primary template with non-type parameters (parameters (here n) are not data types)
template <uint32_t n> struct fact {
	const static uint32_t value = n * fact<n - 1>::value;
	//use next line of you compiler does not support "declare and initialize a constant static int type 
	//member inside the class declaration" 
	//enum { value = n * fact<n - 1>::value };                 
};

template <> struct fact<0> {         //fully specialized template for n as 0
	const static uint32_t value = 1;
	//enum { value = 1 };
};

int main() {
	std::cout << "fact<0>=" << fact<0>::value << std::endl;   //output: fact<0>=1
	std::cout << "fact<10>=" << fact<10>::value << std::endl; //output: fact<10>=3628800

	//Lab: uncomments the following two lines, build and run this program, what are you expecting? 
	//uint32_t m=5;
	//std::cout << fact<m>::value << std::endl;
}