#include <bits/stdc++.h>
using namespace std;
#define YES cout << "YES\n"
#define NO cout << "NO\n"
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, nn;

        cin >> n >> x;
        int cnt = 0;

        nn = 2 * n;
        int arr[nn];
        for (int i = 0; i < nn; ++i)
            cin >> arr[i];
        sort(arr, arr + nn);

        for (int i = 0; i < n; i++)
        {
            if (arr[i + n] - arr[i] >= x)
                cnt++;
        }
        if (cnt == n)
            YES;
        else
            NO;
    }
    return 0;
}