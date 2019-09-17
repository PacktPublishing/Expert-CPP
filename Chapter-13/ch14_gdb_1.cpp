//ch14_gdb_1.cpp
#include <iostream>
float multiple(float x, float y);
int main()
{
	float x = 10, y = 20;
	float z = multiple(x, y);
	printf("x=%f, y=%f, x*y = %f\n", x, y, z);
	return 0;
}

float multiple(float x, float y)
{
	float s = x + y;
	return s;
}

