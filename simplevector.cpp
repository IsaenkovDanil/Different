#include <iostream>
#include "Header.h"
#include<cmath>
using namespace std;

template <typename T>
T Tmain()
{
	setlocale(LC_ALL, "Russian");



	int size;


	while (true) {
		cout << "Введите size" << endl;
		cin >> size;
		if (!size) break;
		if (size < 0) continue;

		T* arr = new T[size];
		T* brr = new T[size];


		cout << "Введите первый вектор :  ";
		for (int i = 0; i < size; i++)
			cin >> arr[i];

		cout << endl;

		cout << "Введите второй вектор :  ";
		for (int i = 0; i < size; i++)
			cin >> brr[i];

		cout << endl;

		double Larr = Length(arr, size);
		cout << "Длина первого вектора = ";
		cout << Larr;

		cout << endl;
		double Lbrr = Length(brr, size);
		cout << "Длина первого вектора = ";
		cout << Lbrr;
		{
			double	Ang = Angle(arr, brr, size);
			cout << endl;
			cout << "Угол между векторами равен = ";
			cout << Ang;
		}
		delete[] arr;
		delete[] brr;
		cout << endl << endl;
	}


	cout << endl;
	cout << "Приложение завершено"; cout << endl;

	return 0;
}





int main()

{
	Tmain<int>();


}
