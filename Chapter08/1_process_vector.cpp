#include <vector>

void process_vector(const std::vector<int>& vec) 
{
 // calculate the sum and print it
}

int main()
{
 std::vector<int> vec1{1, 2, 3, 4, 5};
 std::vector<int> vec2{6, 7, 8, 9, 10};
 std::vector<int> vec3{11, 12, 13, 14, 15};
 process_vector(vec1); // takes A amount of time
 process_vector(vec2); // takes A amount of time
 process_vector(vec3); // takes A amount of time
}
