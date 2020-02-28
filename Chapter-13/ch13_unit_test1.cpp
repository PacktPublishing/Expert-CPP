//ch13_unit_test1.cpp
#define BOOST_TEST_MODULE my_test  //item 1, "my_test" is module name
#include <boost/test/included/unit_test.hpp> //item 2, header-only

//declare we begin a test suite and name it "my_suite "
BOOST_AUTO_TEST_SUITE(my_suite)

//item 3, add a test case into test suit, here we choose BOOST_AUTO_TEST_CASE and name it "test_case1" 
BOOST_AUTO_TEST_CASE(test_case1) {
	char x = 'a';
	BOOST_TEST(x);        //item 4, checks if c is non-zero
	BOOST_TEST(x == 'a'); //item 4, checks if c has value 'a'
	BOOST_TEST(x == 'b'); //item 4, checks if c has value 'b'
}

//item 3, add the 2nd test case
BOOST_AUTO_TEST_CASE(test_case2)
{
	BOOST_TEST(true);
}

//item 3, add the 3rd test case
BOOST_AUTO_TEST_CASE(test_case3)
{
	BOOST_TEST(false);
}

BOOST_AUTO_TEST_SUITE_END() //declare we end test suite