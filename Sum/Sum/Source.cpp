#include <iostream>
using namespace std;
int main()
{
	long int a;
	cin >> a;
	if (a > 0)
	{
		for (int i = a - 1;i >= 1;i--)
		{
			a = a + i;
		}
	}
	else
	{
		for (int i = a + 1;i <= 1;i++)
		{
			a = a + i;
		}
	}
	cout << a;
}