//ch4_1_macro_func.cpp
#include <iostream>
#define app_max(a,b) ((a)>(b) ? (a):(b))
int main() {
	int a = 5, b = 10;
	int c = app_max(a, b);       //c=10
	float d = 3.2, e = app_max(c, d);       //e=10.0f
	for (int i = 0; i < 100; ++i) {
		int f = app_max(0, std::rand() - RAND_MAX / 2);   //is f positive or negative? 
											   //rand() returns an integer in [0,RAND_MAX]
		std::cout << "c=" << c << ", e=" << e << ", f=" << f << std::endl;
	}
	return 0;
}
