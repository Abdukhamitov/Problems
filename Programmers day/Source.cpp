#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a  % 4!= 0 || a % 100 == 0 && a % 400 != 0)
    {
        cout << "13/09/";
            printf("%04d", a);
    }
    else
    {
        cout << "12/09/";
        printf("%04d", a);
    }
}