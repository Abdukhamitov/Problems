#include <iostream>
#include <string>
using namespace std;
int main()
{
	string flower = "GCV", newflower = "";
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		newflower += flower[2];
		newflower += flower[0];
		newflower += flower[1];
		flower = "";
		flower = newflower;
		newflower = "";
	}
	cout << flower;
}