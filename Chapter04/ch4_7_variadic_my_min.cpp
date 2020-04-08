//ch4_7_variadic_my_min.cpp
//this program is tested on g++ (Ubuntu/Linaro 7.3.0-27ubuntu1~18.04) 7.3.0
//it may have compile errors for other platforms
#include <iostream>
#include <math.h> 

double my_min(double n)
{
	return n;
}

template<typename... Args>
double my_min(double n, Args... args)
{
	return fmin(n, my_min(args...));
}

using namespace std;
int main() {
	
	double x1 = my_min(2);
	double x2 = my_min(2, 3);
	double x3 = my_min(2, 3, 4, 5, 4.7,5.6, 9.9, 0.1);
	cout << "x1=" << x1 <<  ", x2=" << x2 <<  ", x3=" << x3 << endl;
	return 0;
}
