#include <iostream>
using namespace std;


class Integer
{
public:
    Integer(double n)
    {
        value = n;
    }

    double getValue() const { return value; }
    
    Integer operator*(double n) const {
        return Integer {n * value};
    }

    Integer operator*(int n) const {
        return Integer {n * value};
    }



    void print()  const
    {
        cout << "value: " << value << endl;
    }


private:
    double value;
};  

ostream& operator<<(ostream& stream, const Integer& integer)
{

    stream << integer.getValue();
    return stream;
}


int main(){

    Integer num = 1.1;

    cout << num * 2.3;


    return 0;
}

