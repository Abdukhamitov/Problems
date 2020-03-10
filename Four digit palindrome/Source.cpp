#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i = a.size(); i++)
	{
		if (a[0] == a[3] && a[1] == a[2])
		{
			cout << "YES";
			break;
		}
		else
		{
			cout << "NO";
			break;
		}
	}
}