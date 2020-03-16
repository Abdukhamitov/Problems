#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	getline(cin, a);
	if ((a[0] == 'A' || a[0] == 'C' || a[0] == 'E' || a[0] == 'G') && a[1] % 2 != 0)
	{
		cout << "BLACK";
		return 0;
		
	}
	else if ((a[0] == 'B' || a[0] == 'D' || a[0] == 'F' || a[0] == 'H') && a[1] % 2 == 0)
	{
		cout << "BLACK";
		return 0;
		
	}
	else

	{
		cout << "WHITE";
	
	}
}
