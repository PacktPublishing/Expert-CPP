//ch13_rca_mix_sign_unsigned.cpp
#include <iostream>
using namespace std;
int main()
{
	int32_t   x = 10;
	uint32_t  y = 20;
	uint32_t  z = x - y; //z=(uint32_t)x - y
	cout << z << endl;   //z=4294967286
}
