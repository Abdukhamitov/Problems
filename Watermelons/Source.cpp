#include <iostream>
using namespace std;
int main()
{
	int a, b,max=0,min=32000;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (max < b)
		{
			max = b;
		}
		if (min > b)
		{
			min = b;
		}
	}
	cout << min <<" "<< max;
	return 0;
}