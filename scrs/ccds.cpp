//ccds:
// c - constructor
// c - copy
// d - destructor
// s - static

#include <iostream>
using namespace std;
class Nexter{
    
    private:
        static inline unsigned count;
        static const int max_count = 4;
        int num;


    public:
        Nexter(int num){//конструктор
            if(count < max_count){
                this->num = num;
                ++count;
            }
            else{ //вызов ошибки (а нехуй)
                cout << "Oops! Too much Nexters\n";
                num = 0 / 0;
            }

        } 

        Nexter(const Nexter &n){ //копирование
            num = n.num;
        }

        ~Nexter(){count--;} //деструктор



    int getNum(){return num;} //геттеры

    void setNum(int num){this->num = num;}
    
    static int getCount(){return count;} //сеттер

};

int main(){
    cout << "! " << Nexter::getCount() << " !" << endl;
    Nexter red(3);
    cout << "+red | count = " << Nexter::getCount() << endl;
    Nexter blu(4);
    cout << "+blu | count = " << Nexter::getCount() << endl;
    Nexter grn(blu);
    cout << "+grn | count = " << Nexter::getCount() << endl;
    {
    Nexter ylw(100);
    cout << "+ylw | count = " << Nexter::getCount() << endl; //вызывается деструктор, т.к. заканчивается область видимости
    }
    cout << "-ylw | count = " << Nexter::getCount() << endl; 


    return 0;git commit -m "поработал с конструктором, копированием, деструктором и static. mutable решил не пихать, позже мб будет код с ним"
}