#include<iostream>
using namespace std;
int main()
{
	int long long a[2];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	int long long par = a[0] * a[1] + a[1] * a[2] + a[0] * a[2];
	cout << 2 * par << " " << a[0] * a[1] * a[2];
}