#include <iostream>
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 4; i++)
	{
		cin>> a[i];
	}
	
	if (a[3] > a[0]) 
	{
		cout << a[0] * a[1] + ((a[3] - a[0]) * a[2]);
	}
	else 
	{
		cout << a[3] * a[1];
	}
}