
#include<iostream>
using namespace std;

int Sum(int a, int b, int c = 0);
int Difference(int a, int b);
int Product(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello Functions" << endl;
	int a, b;
	cout << "введите два числа: "; cin >> a >> b;
	int  c = Sum(a, b, 5);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	cout << Sum(15, 16) << endl;
}

int Sum(int a, int b, int c)
{
	int d = a + b + c;
	return d;
}

int Difference(int a, int b, int c)
{
	return a - b;
}

int Product(int a, int b)
{
	return a * b;
}

double Quotient(int a, int b)
{
	return (double)a / b;
}