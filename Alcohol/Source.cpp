#include <iostream>
using namespace std;
int main()
{
	unsigned long long a, b, c;
	cin >> a >> b >> c;
	a = a / 2;
	b = b / 6;
	if (a <= b && a <= c) {
		cout << a;
	}
	else if (b <= a && b <= c) {
		cout << b;
	}
	else if (c <= a && c <= b) {
		cout << c;
	}
	else {
		cout << 0;
	}
	return 0;
}