//ch4_10_none_type_template_param2.cpp
#include <iostream>
template<const char* msg>
void foo() {
	std::cout << msg << std::endl;
}

// need to have external linkage
extern const char str1[] = "Test 1"; 
constexpr char str2[] = "Test 2";
extern const char* str3 = "Test 3";
int main()
{
	foo<str1>();
	foo<str2>();
	//foo<str3>();  //error: 'str3' is not a valid template argument because 'str3' is a variable, not the address of a variable

	//const char str4[] = "Test 4";
	//constexpr char str5[] = "Test 5";
	//foo<str4>();   //error: 'str4' is not a valid template argument of type 'const char*' because 'str4' has no linkage
	//foo<str5>(); // error: 'str5' is not a valid template argument of type 'const char*' because 'str5' has no linkage
	return 0;
}
