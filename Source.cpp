#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    while (b != 0)
    {
        c = a; a = b; b = c % a;
    }
    cout << a;
    return 0;
}