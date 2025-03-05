#include <iostream>
#include <math.h>
#include <string>
using namespace std;



// просто изучал работу с указателями

void print(int* value){
    cout << "value = " << *value << "\t|\t";
    cout << "address = " << value << "\n";
}

void print_arr(int arr[], int size){
    cout << "[ ";
    for(int i = 0; i < size; i++){
        cout << &(arr[i]) << " ";
    }
    cout << "]" << endl;
}


void bin_print(int n){
    int a = 10;
    int b = 10;
    int* pa = &a;
    int* pb = &b;
    
    cout << "a : " << pa << endl;
    cout << "b : " << pb << endl;
    cout << "__________________" << endl;
    
    for(int i = 0; i < n; i++){
        cout << "a : " << pa << "\t  |  "; 
        cout << "b : " << pb << endl;
        pb++;
    }
}

int main(){

    char v = 'h';    
    char* cv = &v;
    int* iv = (int*)cv;
    cout << "\n\n\n";

    //int rv = *vv; void нельзя разыменовывать

    int num = 10;
    int* pnum = &num;

    cout << num << " : " << pnum << endl;
    pnum++;
    
    cout << num << " : " << pnum << endl;

    int number = 10;
    int numbers[number]; 
    print(&number);
    print_arr(numbers, 7);
    bin_print(5);


    for(int i = 0; i < 20; i++){
        int num = 1 << i;        
        int num2 = to_string(num)[to_string(num).size()-1];
        if(to_string(num)[to_string(num).size()-1] == 52){
            cout << 2 << "^" << i << " = " << pow(2, i) << endl; 
        }
    }

    return 0;
}