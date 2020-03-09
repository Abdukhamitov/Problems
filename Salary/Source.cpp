#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[3], max = -999, min = 99999999;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}

	}
	cout << max - min;


}