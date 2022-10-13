// lab_03.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Титиш Ольги
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
    double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -7-R)
		y = R;
	else
	if (-7-R < x && x <= -7+R)
	    y = R - sqrt(R*R-(x+7)*(x+7));
	else
	if (-7+R < x && x <= -4)
        y = R;
	else
	if (-4 < x && x <= 0)
	    y = (- R * x) / 4;
	if (0 < x < 4 * atan(1.0))
		y = sin(x);
	else
		y = x - atan(1.0);
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}