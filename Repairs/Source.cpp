#include <iostream>
using namespace std;
int main()
{
	long long l, w, h, room;
	cin >> l >> w >> h;
	room = h * ((2 * l) + 2 * w);
	for (long long i = 2; i < 1000000; i++)
	{
		if (room % 16 == 0)
		{
			cout << room / 16;
			break;
		}
		else if (room % 16 != 0)
		{
			cout << (room / 16) + 1;
			break;
		}

	}
}