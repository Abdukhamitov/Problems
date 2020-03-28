#include <iostream>
using namespace std;
int main()
{
	int a=0, b=1, c,f;
	cin >> c;
	for (int i = 0; i < c/2; i++)
	{
		a = a + b;
		b = b + a;
	}
	if (c % 2 == 0)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
}