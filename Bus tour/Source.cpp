#include <iostream>
using namespace std;
int main()
{
	int number, a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> number;
		if (number <= 437) {
			cout << "Crash " << i + 1;
			return 0;
		}
	}
	cout << "No crash";
	return 0;
}