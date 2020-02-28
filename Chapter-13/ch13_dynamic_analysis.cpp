//ch14_dynamic_analysis.cpp
#include <iostream>
int main() 
{
    int n=10;

    //leak: free() is not cialled
    float *p = (float *)malloc(n * sizeof(float));
    for( int i=0; i<n; ++i){
        std::cout << p[i] << std::endl;
    }
    return 0;
}

