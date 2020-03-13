#include <iostream>
using namespace std;
int main()
{
	int a, b,sum=0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		if (i != a)
		{
			sum += b - 1;
		}
		else
		{
			cout << sum + b;
			break;
		}
	}
}