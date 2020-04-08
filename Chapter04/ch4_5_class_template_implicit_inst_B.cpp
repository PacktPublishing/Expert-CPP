//file ch4_5_class_template_implicit_inst_B.cpp
#include "ch4_5_class_template_implicit_inst.h"
int main()
{
	X<int> xi;    //implicit instantiation generates class X<int>, then create object xi
	xi.f();       //and generates function X<int>::f(), but not X<int>::g()
	
	typedef void (X<int>::*TFuncPtr)();
	TFuncPtr pf = &X<int>::f;
	TFuncPtr pg = &X<int>::g;
	TFuncPtr ph = &X<int>::h;
	std::cout << pf << ", " << pf <<  std::endl;

	X<float> xf;  //implicit instantiation generates class X<float>, then create object xf
	xf.g();       //and generates function X<float>::g(), but not X<float>::f()
	return 0;
}
