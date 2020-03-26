#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	int a=0,b=0;
	cin >> num;
	for (int i = 0; i <= num.size(); i++)
	{
		if (num[i] == '0')
		{
			a = a + 1;
			
		}
		else if (num[i] != '0')
		{
			if (a > b)
			{
				b = a;
				a = 0;
			}
			else
			{
				a = 0;
			}
			
		}
	}
	cout << b;
}