/*
// EX.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <math.h>
#include <cmath>
#include <iostream>
#define pi 3.14
using namespace std;
double equation(double x) {
   
    return x * x * x - x + 0.3;//0.3*x*x+2.5*sin(x*x);
}
double derivative(double x) {
 
        //return -cos(cos(1/x))*sin(x)-1;
    return 3*x*x-1;//3/5*x+cos(x*x)*5*x;
}
double solve(double a, double b)
{
    int n = 0;
    double x = a, delta;
    do {
        n++;
        if (1-derivative(x)/ derivative(x) < 1) {
        cout << derivative(x)<<endl;
        double denom = derivative(x);
        delta = equation(x) / denom;
        x -= delta;
        cout << "x = " << x<< "y = " << equation(x)<<" n =  "<<n<<endl;}
        else
        {
            cout << "!!! " << endl; break;
        }
    } while ((abs(delta) > 1e-3) or (x>=b));
    return x;
}
int main() {  

    double x = solve(0.7,1);
    cout << x << " " << equation(x);
    return 0;

}
/*
double solve(double x, double xk,double eps)
{
    double  delta;
    do {
       
        double denom = derivative(x); 
        delta = equation(x) / denom;
        x -= delta;

    } while ((abs(delta) < eps) or (x>xk));
    return x;
}
int main() {
    double x1,xk1,eps1;
    cin >> x1;
    cin >> xk1;
    cin >> eps1;
       x1= solve(x1,xk1,eps1);
    cout << x1 << " " << equation(x1);
    return 0;
}*/
//#include <math.h>
//#include <iostream>
//#define pi 3.14
//using namespace std;
//
//double f(double x) {
//
//    return   exp(2 * x * x)-3 ;
//}
//
//double fi(double x, double L) {
//
//    return  x + L * f(x);
//}
//
//
//int main() {
//    int n = 0;
//    double x, y, c, b, L = -0.35, eps;
//    cout << "x="; cin >> x;
//    cout << "eps="; cin >> eps;
//    do {
//        y = fi(x, L);
//        b = fabs(x - y);
//        x = y;
//        n += 1;
//    } while (b >= eps);
//    cout << "c=" << x << "\n";
//    cout << "n=" << n << "\n";
// 
//    return 0;
//}* /

#include <conio.h>
#include <math.h>
#include <iostream>

#define pi 3.14
using namespace std;
long double f(long double x) {

    return   x * x * x - x * x - 9 * x + 9;
}
long double f1(long double x) {

    return  3*x*x-2*x-9;
}

long double fi(long double x, long double L) {

    return  x + L * f(x);
}


int main() {
    int n = 0;
  long  double x, y, c, b, L , eps;
    cout << "x="; cin >> x;
    cout << "eps="; cin >> eps;
  
    do {L = f1(x);
    if (L >= 0) L = -0.35; else L = 0.35;
        y = fi(x, L);
        b = fabs(x - y);
        x = y;
        n += 1;
        cout << "c=" << x << "\n";
    cout << "n=" << n << "\n";
    } while (b >= eps);
   
    return 0;
}