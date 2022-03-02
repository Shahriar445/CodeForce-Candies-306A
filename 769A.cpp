#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        m += a;
    }
    cout << m / n;
}