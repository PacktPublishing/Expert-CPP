//ch4_9_template_type_argument.cpp
#include <iostream>
#include <typeinfo>  //for 'typeid' to work  
using namespace std;

template<class T> class C {};                      //class template with type template parameter
template<class T> void f() { cout << "T" << endl; };      //function template with type template parameter 
template<int i> void f() { cout << "i=" << i << endl; }; //function template with non-type template parameter 

struct A;                     // incomplete type 
typedef struct {} B;             // type alias to an unnamed type
int main() {
	cout << typeid(A).name() << endl;
	cout << typeid(A*).name() << endl; 
	cout << typeid(B).name() << endl;
	cout << typeid(int()).name() << endl;

	C<A> x1;                     //ok: 'A' names a type
	C<A*> x2;                    //ok: 'A*' names a type
	C<B> x3;                     //ok: 'B' names a type
	f<int()>();       //ok:, since int() is considered as a tpye, this calls f() with T as argument  
	f<5>();       //ok:, since int() is considered as a tpye, this calls f() with T as argument  

	return 0;
}
