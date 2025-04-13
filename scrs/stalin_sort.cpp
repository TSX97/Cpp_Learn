#include <iostream>
#include <vector>

using namespace std;

vector<int> stalin_sort(const vector<int>& list) {
    if (list.empty()) {
        return list;     }

    vector<int> result;
    result.push_back(list[0]);

    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] >= result.back()) { 
            result.push_back(list[i]);
        }
    }

    return result;
}

int main() {

    //сами пишите мне в падлу

	return 0;
}
