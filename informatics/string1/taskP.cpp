#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main(){
 
 string hex = "-BC";
 
 int result = 0;
 int power = 1;
 
 map<char, int> table;
 
 table['0'] = 0;
 table['1'] = 1;
 table['2'] = 2;
 table['3'] = 3;
 table['4'] = 4;
 table['5'] = 5;
 table['6'] = 6;
 table['7'] = 7;
 table['8'] = 8;
 table['9'] = 9;
 table['A'] = 10;
 table['B'] = 11;
 table['C'] = 12;
 table['D'] = 13;
 table['E'] = 14;
 table['F'] = 15;
 
 

 for (int i = hex.size()-1; i >= 0; i--){
  
  cout << 'p' << power << "\t";  
  
  cout << 'h' << hex[i] << "\t";
  
  cout << 't' << table[hex[i]] << "\t";

  cout << "t[h]*p" <<  table[hex[i]] * power << endl;

  result = result + table[hex[i]] * power;

  power *= 16;
 }
 if(hex[0] == '-'){

    cout << '-';

 }
 
 cout << result;
 
 return 0;
}
