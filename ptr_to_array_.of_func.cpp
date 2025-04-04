#include <iostream>
#include <string>
using namespace std;


void sum(int a, int b){
 cout << "x + y = " << a+b << endl;
}

void sub(int a, int b){
 cout << "x - y = " << a-b << endl;
}

void mul(int a, int b){
 cout << "x * y = " << a*b << endl;
}

void dec(int a, int b){
 cout << "x % y = " << a % b << endl;
}


void dec2(int a, int b){
 cout << "x / y = " << a/b << endl;
}

int main(){
 
 int a = 10;
 int b = 4;
 int result;

 
 void (*operation[5]) (int, int) = {sum, sub, mul, dec, dec2};
 
 for(unsigned i = 0; i < 5; i++){
  operation[i](a, b);
 }
 
 
 
 
 return 0;
}
