#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	string odd="", even="";
	cin >> a;
	int b[100];
	for (int i = 0; i < a; i++)
	{
		cin >> b[i];
		if (b[i] % 2 == 0)
		{
			even = even+ to_string(b[i])+" ";
		}
		else
		{
			odd = odd + to_string(b[i]) + " ";
		}
	}
	if (even.size() >= odd.size())
	{
		cout << odd << endl << even << endl << "YES";
	}
	else
	{
		cout << odd << endl << even << endl << "NO";
	}

}