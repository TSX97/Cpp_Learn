#include <iostream>
using namespace std;

//task 1
//тут на ооп просто задания с https://metanit.com/cpp



class Integer{

private:
    int num;

public:
    Integer(int p_num){
        num = p_num;
        cout << "сконструирован обьект класса Integer" << endl;
    }

    int getNum(){
        return num;
    }

    void setNum(int new_num){
        num = new_num;
    }

    void printNum(){
        cout << num << endl;
    }

};

int main(){
    Integer x {6};
    x.printNum();
    x.setNum(x.getNum()*2);
    cout << x.getNum();


    return 0;
}
