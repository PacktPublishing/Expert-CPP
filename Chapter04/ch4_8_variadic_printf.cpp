//ch4_8_variadic_printf.cpp
//this program is tested on g++ (Ubuntu/Linaro 7.3.0-27ubuntu1~18.04) 7.3.0
//it may have compile errors for other platforms
#include <iostream>

//base function: recursive end
void printf_vt(const char *s)
{
	while (*s) {
		if (*s == '%' && *(++s) != '%')
			throw std::runtime_error("invalid format string: missing arguments");
		std::cout << *s++;
	}
}

//recursive call
template<typename T, typename... Rest>
void printf_vt(const char *s, T value, Rest... rest)
{
	while (*s) {
		if (*s == '%' && *(++s) != '%') {
			std::cout << value;
			printf_vt(s, rest...); // called even when *s is 0 but does nothing in that case
			return;
		}
		std::cout << *s++;
	}
}

int main() {
	int x = 10;
	float y = 3.6;
	std::string s = std::string("Variadic templates");
	const char* msg = "%s can accept %i parameters (or %s), x=%d, y=%f\n";
	printf(msg, s, 100, "more", x, y);   //replace 's' by 's.c_str()' to prevent the output bug

	const char* msg2 = "% can accept % parameters (or %); x=%,y=%\n";
	printf_vt(msg2, s, 100, "more", x, y);
	return 0;
}