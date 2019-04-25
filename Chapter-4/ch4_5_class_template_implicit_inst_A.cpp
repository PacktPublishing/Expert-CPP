//file ch4_5_class_template_implicit_inst_A.cpp
#include "ch4_5_class_template_implicit_inst.h"
int main()
{
	X<int>   xi;  //implicit instantiation generates class X<int>, then create object xi
	X<float> xf;  //implicit instantiation generates class X<float>, then create object xf
	return 0;
}



