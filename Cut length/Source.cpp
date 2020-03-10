#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	double answer;
	cin >> x1 >> y1 >> x2 >> y2;
	answer = pow(y2 - y1, 2) + pow(x2 - x1, 2);
	printf("%.5f", sqrt(answer));
	return 0;
}