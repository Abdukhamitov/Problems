#include <iostream>
#include <string>
using namespace std;
int main()
{
	string time,time2="";
	int h,m,h1,m1,sh,sm;
	cin >> time>>h1>>m1;
	time2 += time[3];
	time2 += time[4];
	m = stoi(time2);
	h= stoi(time);
	sh = h + h1;
	sm = m + m1;

	for (int i = 0; i < 1000; i++)
	{
		if (sm > 59)
		{
			sh += 1;
			sm = sm - 60;
		}
		else if (sh > 23)
		{
			sh = sh - 24;
		}
		else if (sh <= 23 && sm <= 59)
		{
			printf("%02d", sh);
			cout << ":";
			printf("%02d", sm);
			break;
		}
		else
		{
			continue;
		}
	}
	
	
}