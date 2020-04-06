#include<iostream>
using namespace std;
int main()
{
    int a, d, b = 0, c = 0;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> a;
        if (a > 0)
        {
            b++;
        }
        if (c < b)
        {
            c = b;
        }
        if (a <= 0)
        {
            b = 0;
        }
    }
    cout << c;

}