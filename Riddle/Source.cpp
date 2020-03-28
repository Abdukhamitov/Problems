#include <iostream>
using namespace std;
int main()
{
	int a,b,d,i=-1;
	double c;
	cin >> a>> b;
	do {
		i++;
		c = a - i;
		
	} 
	while (c * i != b);
	cout << i << " " << c;
}