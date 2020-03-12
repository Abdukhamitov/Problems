#include <iostream>
using namespace std;
int main()
{
	long int a, b,count=1;
	cin >> a >> b;
	for (int i = 0; i <= 10000; i++)
	{
		if (a >= b)
		{
			cout << count <<" "<< b;
			break;
		}
		else
		{
			b -= a;
			count += 1;
		}
	}

}