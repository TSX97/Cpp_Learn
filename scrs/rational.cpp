#include <iostream>
using namespace std;


class Rational{

    private: 
        int num;
        int den;

    public:
        
        Rational(int num, int den){
                this->num = num;
                if(den == 0){
                    cerr << "123";
                } 
                this->den = den;
        }

        ~Rational(){}

        int getNum(){ return num; }

        int geDen(){ return den; }

        void setNum(int num){ this->num = num; }

        void setDec(int den){ this->den = den; }

        void print(){ cout << num << "/" << den << endl; }

        Rational transformation(int n){
            
            int diff = n / den;            
            this->num *= diff;
            this->den *= diff;
            return *this; 
        }



};


int main(){

    Rational rat = {1, 2};
    rat.print();

    rat.transformation(3);
    rat.print();

}