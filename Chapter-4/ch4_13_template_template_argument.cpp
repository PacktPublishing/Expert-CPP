//ch4_12_template_template_argument.cpp

#include <iostream>
#include <typeinfo>
using namespace std;

//primary class template X with template type parameters
template<class T, class U> class X {
public:
	T a;
	U b;
};

//partially specialization of class template X
template<class U> class X<int, U> {
public:
	int a;
	U b;
};

//primary class template Y with template template parameter
template<template<class T, class U> class V> class Y {
public:
	V<int, char> i;
	V<char, char> j;
};

Y<X> c;

int main() {
	cout << typeid(c.i.a).name() << endl;  //short
	cout << typeid(c.i.b).name() << endl;  //char
	cout << typeid(c.j.a).name() << endl;  //char
	cout << typeid(c.j.b).name() << endl;  //char
	return 0;
}