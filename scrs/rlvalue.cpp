#include <iostream>
using namespace std;




void print(int&& value) { //rvalue-ссылка как параметр для функции

    cout << value << endl;

}

int defaultnum(){
    int num = 6; //всего один обьект num в памяти потому что эээ вроде потому что rvalue
    return num;
}



int main() {

    int n = 5; // n это lvalue, 5 + 12 это rvalue
    int&& tempRef = move(n); //преобразование int в int&&  
    
    
    print(5); //rvalue
    
    // print(tempRef); ссылка на rvalue !не сработает

    // print(n);  lvalue !не сработает

    print(defaultnum());


    
    return 0;
}




