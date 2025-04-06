#include <iostream>
#include <optional>
#include <string>

using namespace std;


optional<unsigned> find_index(const string& text, char letter){
    for(unsigned i = 0; i < text.size(); i++){
        if (text.empty())
        return nullopt; 
        
        if (text[i] == letter){
            return i;
        }

    }  

    return nullopt;  

}


template <typename T>
void print_opt(T value){

    if(value){
        cout << "value is " << *value << endl;
        return;
    }

    else {
        cout << "value is not found" << endl;
        return;
    }
    
}


int main(){

    const string txt = "qwysgiuhop[rtwehjutyhgehyuihqwgdopqfe[]]";

    optional<unsigned> num = find_index(txt, 't');
    print_opt(num);
    
    num = find_index(txt, '3');
    print_opt(num);


    return 0;
}
