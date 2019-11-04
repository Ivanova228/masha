#include <iostream>

using namespace std;

int main(int args)
{
	setlocale(LC_ALL, "");
	double x, y;
	cout << "введите число x ";
	cin >> x;
	cout << "введите число y ";
	cin >> y;
	if (x / y > 0)
	{
		cout << log(x / y) + (pow(x, 2) - y * cos(x));
	}
	if (x / y < 0)
	{
		cout << log(fabs(x / y) + (pow(2.71, x + y)));
	}
	if (x / y == 0)
	{
		cout << sin(pow(y, 2) + 1);
	}
}

