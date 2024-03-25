
#include <iostream>

using namespace std;

struct B {
	virtual void f()const { cout << " B::f "; }
	void g()const { cout <<  " B::g "; }

};
struct D :B {
	void f()const { cout << " D::f "; }
	void g() { cout << " D::g "; }

};
struct DD :D {
	void f() { cout <<  " D::f "; }
	void g()const { cout <<  " DD::g "; }
};
void call(const B& b) {
	b.f(); b.g();
}
int main() {
	B b;
	D d;
	DD dd;
	call(b); cout << endl;
	call(d);  cout << endl; call(dd); cout << endl;
	b.f(); cout << endl; b.g(); cout << endl;
	d.f(); cout << endl; d.g(); cout << endl;
	dd.f(); cout << endl; dd.g(); cout << endl;

}
