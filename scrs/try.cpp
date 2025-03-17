#include <iostream>
using namespace std;


double divide(double a, double b){
    if (b) {return a / b;}
    throw string{"Division by zero!"};
}



int main(){

    double num = divide(1.0, 5.23);

    
    cout << num << endl;
    
    try 
    {
        double goerr = divide(1.0, 0.0);
    } catch (const string& err) {

        cout << err << endl;
    }

    return 0;
}


