
#include<cmath>
#include <limits>
using namespace std;
double(*pam)(int i);
#include<iostream>
#include <vector>
typedef bool (*pred)(int x);


//template<typename T>
int count(const vector<int>& vv, bool (*fff)(int x))
{
	int cot = 0;

	for  ( auto K : vv)
	{
		if (fff(K)) cot++;
	}
	return cot;
}

bool f(int x) {
	return x < 55;
}

bool g(int x) {
	return (x % 3)==0;
}
int k(int t) {
	return t;
}
int main() {
	enum color{red,blue,white};
	color yy = color(white);
	//enum delling{blue,red};
	cout << sizeof(color);
	extern int n;
	char ii[] = "ii";
	char oo[] = { 'i','r','/0' };

	cout << oo;
	int x{ 10 };// cout << unsigned int(1);
	union R {
	public: int x;
		  double y;

	};
	R g;
	g.x = 10;
	g.y = 10.252;cout << g.x << " " << g.y;



	int	switch_on = 1;
	switch (switch_on)
	{
	case 1: {cout << endl << " "; break; }
	default:
	{cout << endl << " "; }
	}

	cout << endl << endl; color yyy = white;
	cout <<" " << sizeof( char) << endl;	color y = blue; cout << y * yyy;


	struct FFFF{
		char c;//1
		short tt;//2
		int k;//4
		float yyyyy;//4
		double i;//8
		long double q;//*
	}; cout << " " << sizeof(float) << endl;
	FFFF re;
	FFFF* pp = &re;
	int** A;
	A = new int* [10];
	for (int i= 0; i < 10; i++)
	{
		A[i] = new int[10];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
	A[i][j] = 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		delete[]A[i]; delete[]A;
	}










	vector<int> v = { 1564653,231 };

	bool (*fff)(int x);

	fff = g;

	int count11 = count(v,fff);

	//int count11 = count(v, [](int x) {return -x > 0;});

	cout << count11;

	cout << 65456316541654165416541896541986543563456346345653463456345543165324'653'168'534'685.l<<endl;
	cout <<long  double(1/3.0);


	cout << endl << endl;

	int* p = new int(6);
	int i = 0;
	cout<<k(k(5));


}
