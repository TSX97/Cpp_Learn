#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class Product{
	
public:
	
	Product(int id, string name, double price) : id(id), name(name), price(price) { }
	
	~Product(){ }
	
	Product(const Product& other){
		id = other.id;
		name = other.name;
		price = other.price;
	}
	
	int getId(){
		return this->id;
	}
	
	string getName(){
		return this->name;
	}
	
	double getPrice(){
		return this->price;
	}
	
private:

	int id;
	string name;
	double price; //$$$
};


class Order{
	

	
public:
	
	Order(int orderId, string customerName, string status, vector<Product*> products) : orderId(orderId), customerName(customerName), status(status), items(items) { }
	
	~Order() { }
	
	Order(const Order& o){
		orderId = o.orderId;
		customerName = o. customerName;
		status = o. status;
		items = items;
	}
	
	void addProduct(Product* product){
		items.push_back(product);
	}
	
	void removeProduct(int id){
		auto iter = items.begin();
		while(iter != items.end()){
			if((*iter)->getId() == id){
				items.erase(iter);
			}
			++iter;
		}
	}
	
	double getTotalPrice() const {
		
		unique_ptr<double> total = make_unique<double>(0);
	
		for( auto item : items){
			*total += item->getPrice();
		}
		return *total;
	}
	
	vector<Product*> getItems() const {
		return this->items;
	}
	
	void print() const {
		cout << "==Order==" << endl;
		cout << "id : " << orderId << endl;
		cout << "customer name : " << customerName << endl;
		cout << "products {" << endl;
		
		for (auto item : items){
			cout << item->getName() << endl;
		}
		cout << "}" << endl << endl;
	}
	
private:
	int orderId;
	string customerName;
	string status;
	vector<Product*> items;
};


int main(){
	
	vector<Product*> products_list = {};
	
	Order order = Order(1, "Anastasiya Parandiy", "delivered", products_list);
	
	order.addProduct(new Product(1, "cheese", 2.49));
	order.addProduct(new Product(2, "tomato", 5.12));
	order.addProduct(new Product(3, "milk", 1.25));
	order.addProduct(new Product(4, "eggs", 1.56));
	order.addProduct(new Product(5, "salt", 0.37));
	
	
	order.addProduct(new Product(6, "banana", 1.28));
	order.removeProduct(5);
	order.print();
	cout << "total price : " << order.getTotalPrice() << endl;
	
	for(auto item : order.getItems()){
		delete item;
	}
	
	
	
	return 0;
}