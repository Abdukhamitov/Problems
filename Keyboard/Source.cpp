#include <iostream>
#include <string>
using namespace std;
int main()
{
	string keyboard = "qwertyuiopasdfghjklzxcvbnm";
	string x;
	cin >> x;
	for (int i = 0; i < keyboard.size(); i++)
	{
		if (x[0] == keyboard[i])
		{
			if (x[0] == keyboard[25])
			{
				keyboard[26] = keyboard[0];
			}

			cout << keyboard[i + 1];
			break;

		}
		else
		{
			continue;
		}
	}
}