//ch4_9_none_type_template_param1.cpp
#include <iostream>
template<int N>
class V {
public:
	V(int init) { 
		for (int i = 0; i<N; ++i) { a[i] = init; } 
	}
	int a[N];
};

int main()
{
	V<5> x(1);         //x.a is an array of 5 int, initialized as all 1's 
	x.a[4] = 10;
	for( auto &e : x.a) {
		std::cout << e << std::endl;
	}
	return 0;
}
