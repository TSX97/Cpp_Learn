#include <iostream>
#include <vector>
//#include "array.h" //Remove this include
using namespace std;

template <typename T>
class Matrix {

private:
    vector<vector<T>> mtx;

public:
    
    Matrix(vector<vector<T>> mtx) : mtx(mtx) {}


    Matrix(initializer_list<initializer_list<T>> list) {
        for (const auto& row : list) {
            mtx.emplace_back(row.begin(), row.end());
        }
    }


    ~Matrix() {}

    void print() const {
        if (mtx.empty()) {
            cout << "Matrix is empty." << endl;
            return;
        }

        for (size_t i = 0; i < mtx.size(); ++i) {
            cout << "[ ";
            for (size_t j = 0; j < mtx[i].size(); ++j) {
                cout << mtx[i][j] << " ";
                
            }

            cout << "]" << endl;

        }
    }
};

int main() {
    Matrix<int> nums = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    nums.print();

    return 0;
}