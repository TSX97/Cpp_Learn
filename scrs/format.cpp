#include <iostream>
#include <format>
#include <string>
using namespace std;

int main(){
    
    double num = 12.34567;
    cout << format("num = {:.5}", num);

    return 0;
}
