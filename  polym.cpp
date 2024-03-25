

#include<iostream>
#include <vector>
#include <stdarg.h>

typedef bool (*pred)(int x);
using namespace std;
class BASEE {
public:
	virtual void print() = 0;
};
class Base:public BASEE {
public:const Base() {
	cout << "CONSTRUCTOR Base" << endl;
}
	  ~Base() {
		  cout << "DESTRUCTOR Base" << endl;
	  }
	void print() {
		cout << "Base"<<endl;
	}
};
class Derived:public Base
{
public:
	Derived() {
		cout << "CONSTRUCTOR Derived" << endl;
	}
	void print()override {
		cout << "Derived"<<endl;
	}
	~Derived() {
		cout << "DESTRUCTOR Derived" << endl;
	}

};
class Derived2 :public Base
{
public:
	void print()override {
		cout << "Derived2" << endl;
	}


};

void outtest(BASEE& t) {
t.print();
}
int main() {

	Derived d;
	Derived2 d2;
	Base b;
	d.print();
	d.Base::print();
	Base* bb = &d;
	bb->print();
	outtest(d2);


}


