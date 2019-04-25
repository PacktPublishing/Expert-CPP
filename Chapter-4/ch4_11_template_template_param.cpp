//ch4_11_template_template_param.cpp (courtesy: https://stackoverflow.com)
#include <iostream>
#include <vector>
#include <deque>
#include <list>
using namespace std;
template<typename T, template<class, class...> class C, class... Args>
std::ostream& operator <<(std::ostream& os, const C<T, Args...>& objs) {
	os << __PRETTY_FUNCTION__ << ':\n';
	for (auto const& obj : objs)
		os << obj << ' ';
	return os;
}

int main() {
	vector<double> vf{ 1.1, 2.2, 3.3, 4.4 };
	cout << vf << '\n';

	list<char> lc{ 'a', 'b', 'c', 'd' };
	cout << lc << '\n';

	deque<int> di{ 1, 2, 3, 4 };
	cout << di << '\n';
	return 0;
}