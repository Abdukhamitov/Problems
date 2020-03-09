#include<iostream>
using namespace std;
int main()
{
	int a[3], b[3];
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i] >> b[i];
	}
	int coma, comb;
	coma = a[0] + a[1] + a[2] + a[3];
	comb = b[0] + b[1] + b[2] + b[3];
	if (coma > comb)
	{
		cout << "1";
	}
	else if (comb > coma)
	{
		cout << "2";
	}
	else
	{
		cout << "DRAW";
	}

}