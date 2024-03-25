
#include <iostream>
using namespace std;
#define sum(x,y) x+y
int* f(int* a) {
	return a;
}
int& f(int& a) {
	return a;
}
int f(int* a, int b[]) { return 0; }
template< class T >
int MySwap(T a, T b) {

	return a + b;
}
int main()
{
	int j = 10;
	int k = 18;
	int c = MySwap<int>(2, 3);
	MySwap(j, k);


}
