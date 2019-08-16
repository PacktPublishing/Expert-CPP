#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>

float div1(float num, float den) { return num / den; }
float div2(float num, float den) {
	if (den == 0) {	return NAN;}
	return num / den; 
}

BOOST_AUTO_TEST_CASE(test1)
{
	//boost continues on error tools
	BOOST_CHECK(div1(2, 1) == 2);
	BOOST_CHECK(div1(0, 2) == 0);
	if (div1(2, 0) != INFINITY)
		BOOST_ERROR("Ouch...");

	BOOST_CHECK_MESSAGE( div1(2, 1) == 4,
		"add(..) result: " << div1(2, 1));

	BOOST_CHECK_EQUAL(div1(2, 0), INFINITY);

	//throw on error tools
	BOOST_REQUIRE(div1(2, 1) == 4);      // #2 throws on error
	if ( div1(1, 0) != NAN)
		BOOST_FAIL("Ouch...");           // #4 throws on error
	if ( div1(1, 0) != INFINITY) throw "Ouch..."; // #5 throws on error

}