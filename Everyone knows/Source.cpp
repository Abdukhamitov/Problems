#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == '0')
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
