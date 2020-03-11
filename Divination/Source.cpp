#include <iostream>
using namespace std;
int main()
{
	int a, sum{};
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			sum += i;
		}
		else
		{
			continue;
		}
	}
	cout << sum;
}