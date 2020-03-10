#include<iostream>
using namespace std;
int main()
{
	int a, zero = 0, one = 0;
	cin >> a;
	int b[100];
	for (int i = 0; i <= a - 1; i++)
	{
		cin >> b[i];
		if (b[i] == 1)
		{
			one = one + 1;
		}
		else if (b[i] == 0)
		{
			zero = zero + 1;
		}
		else
		{
			continue;
		}

	}
	if (zero > one)
	{
		cout << one;
	}
	else
	{
		cout << zero;
	}

}