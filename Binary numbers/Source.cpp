#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int checker(int x)
{
	int a[1000], answer;
	for (int i = 0; i < 1000; i++)
	{
		a[i] = pow(2, i);
		if (x == a[i])
		{
			answer = 1;
			break;
		}
		else
		{
			answer = 0;
		}

	}
	return answer;
}
int main()
{
	int a;
	cin >> a;
	if (checker(a) == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
