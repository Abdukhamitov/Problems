#include <iostream>
using namespace std;
int main()
{
    int a, b[100][1], max = -99, n;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b[i][0] >> b[i][1];
        if (b[i][1] == 1 && b[i][0] > max)
        {
            max = b[i][0];
            n = i + 1;
        }
        else
        {
            continue;
        }
    }
    if (max > -99)
    {
        cout << n;
    }
    else
    {
        cout << "-1";
    }
}