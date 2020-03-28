#include<iostream>
using namespace std;
int main()
{
	int a, b=0;
	cin >> a;
	for (int i = 0; i <= 1000000; i++)
	{
		if (a == 1)
		{
			b += 1;
			cout << b;
			return 0;
		}
		else if (a % 2 == 1&&a!=1)
		{
			b += 1;
			a = a / 2;
			continue;
		}
		else if (a % 2 == 0&&a!=1)
		{
			a = a / 2;
			continue;
		}
	}
}