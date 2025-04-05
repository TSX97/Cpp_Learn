#include <iostream>
#include <string>
#include <functional>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int main(){

    function<int(int, int)> operation;

    operation = sum;
    std::cout << operation(10, 6) << endl;

    operation = sub;
    std::cout << operation(10, 6) << endl;

    operation = {[](int a, int b){return a * b;}};
    std::cout << operation(10, 6) << endl;

    operation = {[](int a, int b){return a / b;}};
    std::cout << operation(10, 6) << endl;

    return 0;
}