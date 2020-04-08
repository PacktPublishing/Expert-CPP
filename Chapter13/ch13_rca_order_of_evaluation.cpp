//ch13_rca_order_of_evaluation.cpp
#include <iostream>
using namespace std;

class A {
public:
	A(int x) : v2(v1), v3(v2), v1(x) {
	};
	void print() {
		cout << "v1=" << v1 << ", v2=" << v2 << ", v3=" << v3 << endl;
	};
protected:
	//bad: the order of the class member is confusing
	int v1, v2, v3;  
};

class B {
public:
	//good: since the initialization order is: v1 -> v2, 
	//after this we have: v1==x, v2==x.
	B(int x) : v1(x), v2(v1) {};

	//wrong: since the initialization order is: v1 -> v2,  
	//after this we have: v1==?, v2==x. 
	B(float x) : v2(x), v1(v2) {};
	void print() {
		cout << "v1=" << v1 << ", v2=" << v2 << endl;
	};

protected:
	int v1;           //good, here the declaration order is clear
	int v2;
};

int main()
{
	A a(10);
	B b1(10), b2(3.0f);
	a.print();  //v1 = 10, v2 = 10, v3 = 10 for both debug and relase
	b1.print(); //v1 = 10, v2 = 10 for both debug and relase
	b2.print(); //v1 = -858993460, v2 = 3 for debug; v1=0,v2=3 for release.
}


