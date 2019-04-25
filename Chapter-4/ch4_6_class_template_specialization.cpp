//ex4_6_class_template_specialization.cpp
#include <iostream>

//primary class template
template <typename T>
struct X {
	X(T init) : m(init) {}
	T increase() { return ++m; }
	T m;
};

//specialization for char, it's till a class template but with an additional member function toUpperCase()
template <>     //Note: no parameters inside <>, it tells compiler "hi i am a specialized template"
struct X<char> { //Note: argument char appears in <> after X, "Hi, this is specialized only for type char"
	X(char init) : m(init) {}
	char increase() { return (m<127) ? ++m : (m=-128); }
	char toUpperCase() {
		if ((m >= 'a') && (m <= 'z')) m += 'A' - 'a';
		return m;
	}
	char m;
};

int main() {
	X<int> x1(5);      //x1 is an object implicitly instantiated from primary class template X<T> 
	std::cout << x1.increase() << std::endl;
	X<char> x2('b');   //x2 is an object instantiated from specialization template X<char>   
	std::cout << x2.toUpperCase() << std::endl;
	return 0;
}
