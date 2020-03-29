#include <iostream>
#include <string>
using namespace std;
int main()
{
	string nw="",e = "7182818284590452353602875",l="";
	int a,m;
	cin >> a;
	if (a == 0)
	{
		cout << 3;
	}
	else if (a == 25)
	{
		cout << "2." << e;
	}
	else
	{
		for (int i = 0; i < a; i++)
		{
			if ((i == (a - 1)) && ((e[i + 1]) <= 4))
			{
				nw = nw + e[i];
				break;
			}
			
			else
			{
				nw = nw + e[i];
			}
		}
		l = e[a];
		m = stoi(l);
		if (m >= 5)
		{
			nw[a - 1] += 1;
		}
		cout << "2." << nw;
	}

}