#include<iostream>
using namespace std;
int main()
{
	int b, a[99999];
	cin >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> a[i];
	}
	for (int i = (b - 1); i >= 0; i--)
	{
		cout << a[i] << " ";
	}
}