#include <iostream>
using namespace std;


int gcd(int a, int b){


    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp; 
    }
    return a;
}




class Rational{

    private: 
        int num;
        int den;

    public:
        
        void simplify(){
            int common = gcd(num, den);

            num /= common;
            den /= common;
        }
    

        Rational(int num, int den){
                this->num = num;
                if(den == 0){
                    cerr << "знаменатель должен быть больше нуля";
                } 
                this->den = den;
                simplify();
        }

        ~Rational(){}

        
        int getNum(){ return num; }

        int geDen(){ return den; }

        void setNum(int num){ this->num = num; }

        void setDec(int den){ this->den = den; }

        void print(){ cout << num << "/" << den << endl; }

        Rational operator+(Rational other){
            if(this->den == other.den){
                return {this->num + other.num, this->den};
            } else {
                other.num *= this->den;
                this->num *= other.den;
                this->den *= other.den;
                return {this->num + other.num, this->den};
            }
        }

        Rational operator-(Rational other){
            if(this->den == other.den){
                return {this->num - other.num, this->den};
            } else {
                other.num *= this->den;
                this->num *= other.den;
                this->den *= other.den;
                return {this->num - other.num, this->den};
            }
        }

        Rational operator* (Rational other){
            return {this->num * other.num, this->den * other.den};
        }

        Rational operator/ (Rational other){
            swap(this->num, this->den);
            return {this->num * other.num, this->den * other.den};
        }
        
        Rational operator% (Rational other){
            swap(this->num, this->den);
            cerr << "долбаеб";
        }

        string operator[](string index) const{
            if(index == "num"){
                return to_string(num);
            } else if(index == "den"){
                return to_string(den);
            } else {
                return "Invalid index";
            }            
        }
    

        operator int() const { return num / den; }

        // operator double() const {
        //     double result = num  den;
        //     return result;
        // }

        operator bool() const { return num != 0;}



};


int main(){
    setlocale(LC_ALL, "RU");
    Rational rat = {1, 2};
    rat.print();

    cout << "*\n";

    Rational rat2 = {1, 4};
    rat2.print();

    cout << "=\n";

    Rational ratres = {rat *  rat2};
    ratres.print();

    
    return 0;
}