#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n = 1;
	string text;
	cin >> text;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == 'A' && n == 1)
		{
			n = 2;
		}
		else if (text[i] == 'A' && n == 2)
		{
			n = 1;
		}
		else if (text[i] == 'B' && n == 2)
		{
			n = 3;
		}
		else if (text[i] == 'B' && n == 3)
		{
			n = 2;
		}
		else if (text[i] == 'C' && n == 1)
		{
			n = 3;
		}
		else if (text[i] == 'C' && n == 3)
		{
			n = 1;
		}
		else
		{
			continue;
		}
	}
	cout << n;
}