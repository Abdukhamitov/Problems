#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}
	int sum1 = a[0] + a[1] + a[2];
	int sum2 = a[3] + a[4] + a[5];
	int max1 = -9999, min1 = 9999, max2 = -9999, min2 = 9999;
	for (int i = 0; i < 3; i++) {
		if (max1 < a[i]) {
			max1 = a[i];
		}
	}
	for (int i = 3; i < 6; i++) {
		if (max2 < a[i]) {
			max2 = a[i];
		}
	}
	for (int i = 0; i < 3; i++) {
		if (min1 > a[i]) {
			min1 = a[i];
		}
	}
	for (int i = 3; i < 6; i++) {
		if (min2 > a[i]) {
			min2 = a[i];
		}
	}
	int average1 = sum1 - max1 - min1;
	int average2 = sum2 - max2 - min2;
	cout << max1 * max2 + min1 * min2 + average1 * average2;
	return 0;
}