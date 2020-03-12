#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	string text,ntext;
	cin >> a >> text;
	a -= 1;
	for (int i = 0; i < text.size(); i++)
	{
	
		if (i ==a)
		{
			continue;
		}
		else
		{
			ntext = ntext + text[i];
		}
	}
	cout << ntext;
}