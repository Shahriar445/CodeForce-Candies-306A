// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, a[100005];

    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (x <= 0)
        {
            sum += a[i] * 1;
        }
        else
        {
            sum += a[i] * x;
        }
        x -= 1;
    }
    cout << sum << endl;
}