#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if (n % 2 != 0)
    {
        cout << m * (n / 2);
    }
    else if (n % 2 == 0)
    {
        cout << m * (n - 1);
    }
}