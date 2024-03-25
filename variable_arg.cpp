#include <iostream>
#include <stdarg.h>
#include <string>
using namespace std;

struct X {
    int val;
    void out(const string& s, int nv) {
        cerr << this << " -> " << s << " :  " << val << " ( " << nv << " )\n";
    }
    X() {
        out("X()", 0);
        val = 0;
    }
    X(int v) : val(v) {
        out("X(int)", v);
    }
    X(const X& v) {
        val = v.val;
        out("X(X&)", v.val);
    }
    X& operator=(const X& x) {
        val = x.val;
        out("X& operator=(const X&)", x.val);
        return *this;
    }
};

double cube(double& x, int xx) { return x; }
double cube(double& x) { return x; }
void CCube(int x, ...) {
    va_list ap;
    va_start(ap, x);
    while (x--) {
        cout << va_arg(ap, int) << endl;
    }
    va_end(ap);
}
void CCCube(int num, int first, ...) {
    int* ptr = &first;
    while (num--) {
        cout << *ptr << endl;
        ptr++;
    }
}

int main() {
	/*CCube(12,1,2,3,4,5,6,7,8,nullptr,10,2596165);
	auto x = 5; decltype(x) y = 3;
	h j = 0;
	cout << j;*/

    X x1;
    X x2(10);
    X x3 = x2;
    x1 = x3;

    double number = 9.0;
    cout << "Cube of number: " << cube(number) << endl;

    cout << "CCube with variadic args: ";
    CCube(3, 1, 2, 3);

    cout << "CCCube with inline args: ";
    CCCube(2, 7, 8);

    return 0;
}
