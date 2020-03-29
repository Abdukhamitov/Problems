#include <iostream>
using namespace std;
int main()
{
	int x,z,a, b[9999], min = 9999, max = -9999, sum = 0,mult=1;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		if (b[i] > 0)
		{
			sum = sum + b[i];
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (b[i] > max)
		{
			max = b[i];
			x = i;
		}
		if (b[i] < min)
		{
			min = b[i];
			z = i;
		}
	}
	for (int i = 0; i < a; i++)
	{
		if (x > z)
		{
			if (i<x && i>z)
			{
				mult = mult * b[i];
			}

		}
		else if (z > x)
		{
			if (i>x && i<z)
			{
				mult = mult * b[i];
			}
		}
		else 
		{
			continue;
		}
	}
	
	cout << sum << " " << mult;
}