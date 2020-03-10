#include <iostream>
using namespace std;
int main()
{
	int a[2];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	if (a[0] + a[1] == a[2] || a[1] + a[2] == a[0] || a[2] + a[0] == a[1])
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
