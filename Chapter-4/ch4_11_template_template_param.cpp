//ch4_11_template_template_param.cpp (courtesy: https://stackoverflow.com)
#include <iostream>
#include <vector>
#include <deque>
#include <list>

#define __PRETTY_FUNCTION__ __FUNCSIG__

using namespace std;
template<class T, template<class, class...> class X, class... Args>
std::ostream& operator <<(std::ostream& os, const X<T, Args...>& objs) {
	os << __PRETTY_FUNCTION__ << ":" << endl;
	for (auto const& obj : objs)
		os << obj << ' ';
	return os;
}

int main() {
	vector<float> x{ 3.14f, 4.2f, 7.9f, 8.08f };
	cout << x << '\n';

	list<char> y{ 'E', 'F', 'G', 'H', 'I' };
	cout << y << '\n';

	deque<int> z{ 10, 11, 303, 404 };
	cout << z << '\n';
	return 0;
}