#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ticket;
	cin >> ticket;
	if (ticket[0] + ticket[1] + ticket[2] == ticket[3] + ticket[4] + ticket[5])
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}