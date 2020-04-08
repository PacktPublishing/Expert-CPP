//ch13_tdd_test.cpp
#include "ch13_tdd_v2.h"
void test_tdd_v1();
void test_tdd_v2();
using namespace std;
int main()
{
	test_tdd_v1();
	test_tdd_v2();
	return 0;
}

void test_tdd_v1()
{
	Mat<int> x(2, 3);
	x.print("int x=");

	Mat<float> y(1, 2);
	y.print("float y=");
}

void test_tdd_v2()
{
	Mat<int> x(2, 3, 10);
	x.print("int x=");
	assert(2 == x.rows());
	assert(3 == x.cols());

	Mat<char> y(1, 2, 'a');
	y.print("char y=");

}
