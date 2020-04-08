//file ch4_5_class_template_implicit_inst_C.cpp
#include "ch4_5_class_template_implicit_inst.h"
int main()
{
	X<int> *p_xi;   //instantiation of class X<int> is not required, since p_xi is pointer object
	X<float> *p_xf; //instantiation of class X<float> is not required, since p_xf is pointer object
	return 0;
}


