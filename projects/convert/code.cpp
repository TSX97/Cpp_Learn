работает ли код корректно?
include <iostream>
#include <string>
#include <map>
using namespace std;

class Database {

public:
 Database(string name, map<string, double> db): name(name), db(db) {}

 Database(){}

 bool contains(string key){
  return (this->db).count(key);
 }

 double at(string key){
  return (this->db)[key];
 }

 void add(string key, double value){
  if((this->db).count(key)){return;}
  this->db[key] = value;
 }

 void erase(string key){
  this->db.erase(key);
 }

 void print_db_info(){
  cout << "--------------------" << endl;
  cout << "  " << this->name << endl;
  cout << "--------------------" << endl;

  for(pair<string, double> pair : this->db){
   cout << pair.first << '\t' << pair.second << endl;
  }
  cout << "--------------------" << endl;
 }

private:
 string name;
 map<string, double> db;
};

double convert(double value, string curl, string cur2 = "dollar"){
 return 0;
}

int main() {
 map<string, double> td_db;
 map<string, double> dt_db;
 Database* to_dollar_db = new Database("to_dollar_db", td_db);
 Database* dollar_to_db = new Database("dollar_to_db", dt_db);

 to_dollar_db->add("dollar", 1);
 to_dollar_db->add("ruble", 80);
 to_dollar_db->add("yen", 145.63);
 to_dollar_db->add("tenge", 511.04);
 to_dollar_db->add("euro", 0.89);

 dollar_to_db->add("dollar", 1);
 dollar_to_db->add("ruble", 0.012);
 dollar_to_db->add("yen", 0.0069);
 dollar_to_db->add("tenge", 0.0020);
 dollar_to_db->add("euro", 1.12);

 to_dollar_db->print_db_info();
 dollar_to_db->print_db_info();

 string currency1;
 string currency2;

 while(true){
  cout << "enter first currency: " << endl;
  cin >> currency1;
  cout << endl;
  if(to_dollar_db->contains(currency1)){
   break;
  }else{
   cout << "our database have not this currency: (" << endl;
  }
 }

 while(true){
  cout << "enter second currency: " << endl;
  cin >> currency2;
  cout << endl;
  if(dollar_to_db->contains(currency2)){
   break;
  }else{
   cout << "our database have not this currency: (" << endl;
  }
 }

 double result;
 cout << "enter a value: " << endl;
 cin >> result;
 cout << endl;

 result *= to_dollar_db->at(currency1);
 result /= dollar_to_db->at(currency2);

 cout << currency1 << " = " << result << currency2 << endl;

 return 0;
}