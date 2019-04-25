//file ch4_5_class_template_implicit_inst_D.cpp
#include "ch4_5_class_template_implicit_inst.h"
int main()
{
	X<int> *p_xi; //instantiation of class X<int> is not required, since p_xi is pointer object
	p_xi = new X<int>();
	p_xi->f();    //implicit instantiation of X<int> and X<int>::f() occurs here, but not X<int>::g()

	X<float> *p_xf; //instantiation of class X<float> is not required, since p_xf is pointer object
	p_xf = new X<float>();
	p_xf->f();       //implicit instantiation of X<float> and X<float>::f() occurs here
	p_xf->g();       //implicit instantiation of X<float>::g() occurs here

	delete p_xi;
	delete p_xf;
	return 0;
}