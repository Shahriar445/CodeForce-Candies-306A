#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, z;

    cin >> n;
    int a = 0, b = 0, c = 0;
    while (n--)
    {

        cin >> x >> y >> z;

        a += x;
        b += y;
        c += z;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}