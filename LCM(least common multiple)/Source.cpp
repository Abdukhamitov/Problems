#include <iostream>
using namespace std;
int main()
{
	int a, b, c,mx;
	cin >> a >> b;
	if (a > b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	mx = c;
	for (int i = 1	; i < 99999; i++)
	{
		if (c % a == 0 && c % b == 0)
		{
			cout << c;
			return 0;
		}
		
		else
		{
			c = mx;
			c = c * i;
		}
	}
}