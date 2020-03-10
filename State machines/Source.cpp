#include<iostream>
using namespace std;
int main()
{
	long long x, a[100][2];
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> a[i][1] >> a[i][2];
	}
	for (int i = 0; i < x; i++)
	{
		cout << 19 * a[i][2] + (a[i][1] + 239) * (a[i][1] + 366) / 2 << " ";
	}
}