#include <iostream>
#include <string>
#include <random>
using namespace std;
int main()
{
	int a, b;
	string temperature;
	cin >> a >> b >> temperature;
	//cout << a << b << temperature;
	if (temperature == "heat")
	{
		if (a < b)
		{
			cout << b;
		}
		else
		{
			cout << a;
		}
	}
	else if (temperature == "freeze")
	{
		if (a < b)
		{
			cout << a;
		}
		else
		{
			cout << b;
		}
	}
	else if (temperature == "auto")
	{

		cout << b;
	}
	else if (temperature == "fan")
	{
		cout << a;
	}
}