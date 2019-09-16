#include <functional>
#include <iostream>
#include <unordered_map>

int main() {
    int arr[]{1, 2, 3, 4};
    std::unordered_map<char, std::function<int(int,int)> > operations;
    operations['+'] = [](int a, int b) { return a + b; };
    operations['-'] = [](int a, int b) { return a - b; };
    for (auto& op: operations) {
        std::cout << op.second(10, 20) << std::endl;
    }

}
