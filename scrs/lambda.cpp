#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main(){

    vector<string> test = {"hello", "queue", "object", "script", "heap", "stack", "gui", "github", "private", "public", "string", "merge"};

    auto count_of_occurrences {[](vector<string> words, char letter){
    
        int cnt = 0;
        for(int i = 0; i < words.size()-1; i++){
            if(words[i][0] == letter){
                cnt++;
            }
        }
        return cnt;
    
    }};

    cout << count_of_occurrences(test, 's');


    return 0;
}
