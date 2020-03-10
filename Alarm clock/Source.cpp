#include <iostream>
using namespace std;
int main()
{
	int a, b, n;
	cin >> a >> b;
	if (a < b)
	{
		cout << b - a;
	}
	else if (b < a)
	{
		n = 12 - a;
		cout << n + b;
	}
	else
	{
		cout << 0;
	}
}