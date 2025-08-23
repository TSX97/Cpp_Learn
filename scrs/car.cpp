#include <iostream> 
#include <array>
#include <string> 
using namespace std;


class Engine{
	
	
public:
	
	Engine(int horsePower, bool isRunning = false) : horsePower(horsePower), isRunning(isRunning) { }
	
	~Engine() { }
	
	void start(){
		this->isRunning = true;
	}
	
	void stop(){
		this->isRunning = false;
	}
	
	void getInfo() const {
		cout << "horse power: " << this->horsePower << endl;
		cout << "is running: " << this->isRunning << endl;
		cout << endl;
	}
	
	int getHorsePower() const {
		return this-> horsePower;
	}
	
	bool getIsRunning() const {
		return this->isRunning;
	}
	
private:
	
	int horsePower;
	bool isRunning;
	
};

class Wheel {
	
public:
	
	Wheel(int pressure, double diametr) : pressure(pressure), diametr(diametr) { }
		
	~Wheel() { }
	
	void inflate(double psi){
		this->pressure += psi;
	}
	
	void getInfo() const {
		
	
		cout << "pressure: " << this->pressure << endl;
		cout << "diametr: " << this->diametr << endl;
		cout << endl;		
	}
	
	int getPressure() const {
		return this->pressure;
	}
	
	double getDiametr() const {
		return this->diametr;
	}
	
private:

	int pressure;
	double diametr;
	
};

class Car{
	
public:
	
	Car(string model, Engine engine, array<Wheel, 4> wheels) : model(model), engine(engine), wheels(wheels) { }
	
	~Car() { }
	
	void startCar(){
		engine.start();
	}
	
	void stopCar() {
		engine.stop();
	}
	
	void inflateAllWheels(double psi){
		for(auto& wheel : wheels){
			wheel.inflate(psi);
		}
	}
	
	void getInfo() const {
		cout << "model: " << this->model << endl;
		cout << "horse power: " << this->engine.getHorsePower() << endl;
		cout << "engine status: " << (this->engine.getIsRunning() ? "Running" : "Stopped") << endl;
		cout << endl;
	}
	
private:
	
	string model;
	Engine engine;
	array<Wheel, 4> wheels;
	
};

int main(){
	
	Engine eng(140);
	array<Wheel, 4> whls = {
		Wheel(32, 17.0),
		Wheel(32, 17.0),
		Wheel(32, 17.0),
		Wheel(32, 17.0)
	};
	
	Car* myCar = new Car("Lada Priora", eng, whls);
	
	myCar->inflateAllWheels(2.0);
	myCar->startCar();
	myCar->getInfo();
	
	myCar->stopCar();
	myCar->getInfo();
	
	return 0;
}