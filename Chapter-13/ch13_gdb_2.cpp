//ch13_gdb_2.cpp
#include <iostream>

float dotproduct( const float *x, const float *y, const int n);
int main()
{
 float sxx,sxy;	
 float x[] = {1,2,3,4,5};
 float y[] = {0,1,1,1,1};
 
 sxx = dotproduct( x, x, 5);
 sxy = dotproduct( x, y, 5);
 printf( "dot(x,x) = %f\n", sxx );
 printf( "dot(x,y) = %f\n", sxy );
 return 0;
}

float dotproduct( const float *x, const float *y, const int n )
{
 const float *p = x;
 const float *q = x;
 float s = 0;
 for(int i=0; i<n; ++i, ++p, ++q){
 	s += (*p) * (*q);
 }
 return s;
}
