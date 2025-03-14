#include <iostream>
using namespace std; 

int main() {
    int a = 10, b = 20, result;

    __asm (
        "movl %1, %%eax\n"  
        "addl %2, %%eax\n" 
        "movl %%eax, %0\n"  //мне намного больше нравится синтаксис msvc
        : "=r" (result)     
        : "r" (b), "r" (a)
        : "%eax"         
    );

    cout << "Result: " << result << std::endl;
    return 0;
}
