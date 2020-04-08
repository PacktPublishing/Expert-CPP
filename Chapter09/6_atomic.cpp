#include <atomic>
#include <iostream>

int main()
{
    atomic_int m;
    m.store(42); 
    std::cout << m.load(); 
}