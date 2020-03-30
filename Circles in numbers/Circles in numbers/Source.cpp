#include <iostream>
#include <string>
using namespace std;
int main()
{
	string num;
	cin >> num;
	int circle = 0;
	for (int i = 0;i < num.size();i++)
	{
		if (num[i] == '0' || num[i] == '9' || num[i] == '6')
		{
			circle += 1;
		}
		else if (num[i] == '8')
		{
			circle += 2;
		}
		else
		{
			continue;
		}
	}
	cout << circle;
}