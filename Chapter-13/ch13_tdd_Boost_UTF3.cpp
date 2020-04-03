// ch13_tdd_Boost_UTF3.cpp
#define BOOST_TEST_MODULE tdd_test
#include <boost/test/included/unit_test.hpp>
#include "ch13_tdd_v3.h"

//declare we begin a test suite and name it "my_suite "
BOOST_AUTO_TEST_SUITE(tdd_suite)

//add the 1st test case
BOOST_AUTO_TEST_CASE(test_case1) {
	Mat<int> x(2, 3);
	x.print("int x=");
	BOOST_TEST(2 == x.rows());
	BOOST_TEST(3 == x.cols());

	Mat<float> y;
	BOOST_TEST(0 == y.rows());
	BOOST_TEST(0 == y.cols());

	Mat<char> z(1, 10);
	BOOST_TEST(1 == z.rows());
	BOOST_TEST(10 == z.cols());
}

//add the 2nd test case
BOOST_AUTO_TEST_CASE(test_case2)
{
	Mat<int> x(2, 3, 10);
	x.print("int x=");
	BOOST_TEST( 6 == x.numel() );
	BOOST_TEST( false == x.empty() );

	Mat<float> y;
	BOOST_TEST( 0 == y.numel() );
	BOOST_TEST( y.empty() ); 
}

//add the 3rd test case
BOOST_AUTO_TEST_CASE(test_case3)
{
	Mat<float> x(2, 3, 10);
	x.print("float x=");
	Mat<float> y(x);
	Mat<float> z = x;
	y.print("float y=");
	z.print("float z=");
	
	Mat<float> z1 = x + y;
	Mat<float> z2 = x - y;
	Mat<float> z3 = x * y;
	Mat<float> z4 = x / y;

	z1.print("float z1=");
	z2.print("float z2=");
	z3.print("float z3=");
	z4.print("float z4=");
}

BOOST_AUTO_TEST_SUITE_END() //declare we end test suite

