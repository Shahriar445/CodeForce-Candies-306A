#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b;
    for (int i = 1; i <= b; i++)
    {
        if (a % 10 != 0)
        {
            a--;
        }
        else if (a % 10 == 0)
        {
            a = a / 10;
        }
    }
    cout << a << endl;
}
