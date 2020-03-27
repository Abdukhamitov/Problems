#include<iostream>
#include <string>
using namespace std;
int main()
{
	string alphabe = "abcdefghijklmnopqrstuvwxyz", user;
	cin >> user;
	int counter = 0;
	for (int i = 0; i < user.size(); i++)
	{
		if (user[i] == '0')
		{  
			counter++;
		}
		else if (user[i] == '1')
		{
			cout << alphabe[counter];
			counter = 0;
		}
	}
}
