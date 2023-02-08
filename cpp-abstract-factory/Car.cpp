#ifndef __io__
	#define __io__
	#include <iostream>
	using namespace std;
#endif

class Tire {
	protected:
		string name;
		int presure;
	public:
		Tire(string n, int p) : name(n), presure(p) {};
		string getName() { return name; }
		int getPresure() { return presure; }
};

class SimpleTire : public Tire {
public:
	SimpleTire() : Tire("SimpleTire", 75) {}
};

class LuxuryTire : public Tire {
public:
	LuxuryTire() : Tire("LuxuryTire", 100) {}
};

class Body {
protected:
	string name;
	int strenght;
public:
	Body(string n, int s) : name(n), strenght(s) {}
	string getName() { return name; }
	int getStrenght() { return strenght; }
};

class SimpleBody : public Body {
public:
	SimpleBody() : Body("SimpleBody", 75) {}
};

class LuxuryBody : public Body {
public:
	LuxuryBody() : Body("LuxuryBody ", 100) {}
};

class Car {
protected:
	string name;
	Tire* tire;
	Body* body;
public:
	Car(string n):name(n){}
	void setTire(Tire* t) { tire = t; }
	void setBody(Body* b) { body = b; }
	void printDetails() {
		cout << endl << "Car: " << name << endl;
		cout << "Tire: " << tire->getName() << " Presure: " << tire->getPresure() << endl;
		cout << "Body: " << body->getName() << " Strenght: " << body->getStrenght() << endl;
	}

};