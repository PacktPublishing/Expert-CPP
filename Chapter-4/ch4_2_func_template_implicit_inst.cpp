//ch4_2_function_implicit_inst.cpp
#include <iostream>
template <class T>
T app_max(T a, T b) { return (a>b ? a : b); }

using namespace std;
int main() {
	//implicit instantiation in an explicit way
	cout << app_max<int>(5, 8) << endl;         //instantiation as: int app_max<int>(int,int)
	cout << app_max<float>(5.0, 8.0) << endl;   //instantiation as: float app_max<float>(float, float>
	cout << app_max<int>(5.0, 8) << endl;       //instantiation as: int app_max<int>(int,int)
	cout << app_max<double>(5.0, 8) << endl;    //instantiation as: double app_max<double>(double, double)   

												//implicit instantiation in an argument deduction way
	cout << app_max(5, 8) << endl;       //deduced as int app_max<int>(int,int) 
	cout << app_max(5.0f, 8.0f) << endl; //deduced as int app_max<int>(int,int)    

	//implicit instantiation in a confuse way, depend on compiler, may have errors 
	//cout << app_max(5, 8.0)<<endl;//double app_max<double>(double,double) or int app_max<int>(int,int) ?            return 0;
}
