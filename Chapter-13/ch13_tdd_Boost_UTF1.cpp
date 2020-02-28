// ch13_tdd_Boost_UTF1.cpp
#define BOOST_TEST_MODULE tdd_test
#include <boost/test/included/unit_test.hpp>
#include "ch13_tdd_v1.h"

//declare we begin a test suite and name it "my_suite "
BOOST_AUTO_TEST_SUITE(tdd_suite)

BOOST_AUTO_TEST_CASE(test_case1) {
	Mat<int> x(2, 3);
	x.print("int x=");
	BOOST_TEST(2 == x.rows());
	BOOST_TEST(3 == x.cols());

	Mat<float> y;
	BOOST_TEST(0 == y.rows());
	BOOST_TEST(0 == y.cols());

	Mat<char> z(1,10);
	BOOST_TEST(1 == z.rows());
	BOOST_TEST(10 == z.cols());
}
BOOST_AUTO_TEST_SUITE_END() //declare we end test suite

