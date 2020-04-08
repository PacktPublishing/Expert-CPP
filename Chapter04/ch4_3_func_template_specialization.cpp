//ch4_3_func_template_specialization.cpp
#include <iostream>
#include <string>

//primary template
template <class T> T app_max(T a, T b) { return (a>b ? a : b); }

//explicit specialization for T=std::string, note instead of comparing a and b, we only comparing a[0] and //b[0] which means the behavior app_max() is specialized.
template <> std::string app_max<std::string>(std::string a, std::string b) { return (a[0]>b[0] ? a : b); }

int main() {
	std::string a = "abc", b = "efg";
	std::cout << app_max(5, 6) << std::endl;   //calls app_max<int>(int,int)
	std::cout << app_max(a, b) << std::endl;   //calls specialized
											   //app_max<std::string>(std::string,std::string)
	//question: what will happen if you un-comment the following two lines?
	char *x = "abc", *y="efg";
	std::cout << app_max(x, y) << std::endl; //call whom?
	return 0;
}