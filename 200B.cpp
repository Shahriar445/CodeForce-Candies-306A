// in the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        y += x;
    }
    cout << (double)y / n;
}