// Example.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Myclass
{
public:

	int *data;
	Myclass(int size)//побитовое копир
	{
		this->Size = size;
		this->data = new int [size];
	for (int i = 0; i < size; i++)
	{
		data[i] = i;
	}
	cout << "Вызвался конструктор " << this << endl;
	}



	Myclass(const Myclass &other)//побитовое копир
	{
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Вызвался конструктор copy" << this << endl;
	}


	~Myclass()//когда пропала из области видимости
	{
		cout << "Вызвался деструктор " << this << endl; delete[] data;
		}
private:
	int Size;

};

//+лишний объект
void Foo(Myclass value)//по значению - внутри функции копир данные изменения переменной не влияют на саму перемунную
{
	cout << "Foo" << endl;
}
Myclass Foo2()
{
	cout << "Foo" << endl;
	Myclass temp(2);
		return temp;
}








int main()
{
	setlocale(LC_ALL, "ru");
	Myclass a(10);
	//Foo(a);
	//Foo2(a);
	Myclass b(a);
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	unsigned char ch;
	ch = 32;
	while (ch) {
		cout << ch;
		ch++;
	}
	return 0;
}
