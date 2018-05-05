#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

class drob {
private:
	int x;
	int y;
public:
	drob(int a = 0, int b = 1) {
		setDrob(a, b);
	}
	~drob() {
		cout << "drob destructor\n";
	}
	void setDrob(int a, int b){
		x = a;
		if (b == 0)
			b = 1;
		y = b;
	}
	void print() {
		cout << x << "/" << y << " = " << x / y << "\n";
	}

	//getters
	int getX() { return x; }
	int getY() { return y; }

	//setters
	void setX(int a){
		x = a;
	}
	void setY(int b)
	{
		if (b == 0)
		{
			b = 1;
			y = b;
		}
		else y = b;
	}
};

void main() {

	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	drob Drob(12, 0);

	Drob.print();

	cout << "x = " << Drob.getX() << endl;
	cout << "y = " << Drob.getY() << endl;

	cout << "Устанавливаем значения" << endl;
	Drob.setX(10);
	Drob.setY(2);

	cout << "x = " << Drob.getX() << endl;
	cout << "y = " << Drob.getY() << endl;

	Drob.print();

	system("pause");
}