#include <iostream>
using namespace std;
int main()
{
	int a[2], max = -1;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];

	}

	if (a[0] < 94 || a[0]>727)
	{
		cout << "Error";
	}
	else if (a[1] < 94 || a[1]>727)
	{
		cout << "Error";
	}
	else if (a[2] < 94 || a[2]>727)
	{
		cout << "Error";
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		cout << max;
	}
}