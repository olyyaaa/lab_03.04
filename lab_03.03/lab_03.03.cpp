// lab_03.03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ����� �����
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
    double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// ������������ � ����� ����
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