#include <iostream>
using namespace std;
int main()
{
	int a[1], b, c;
	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
	}
	b = a[0] - 1;
	c = a[1] - 1;
	cout << b * c;

}