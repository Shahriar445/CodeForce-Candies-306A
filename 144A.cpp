// in the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int mx = 0, min = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[mx] < arr[i])
        {
            mx = i;
        }
        if (arr[min] >= arr[i])
        {
            min = i;
        }
    }

    if (mx > min)
        cout << mx + n - 2 - min;
    else
        cout << mx + n - min - 1;
    return 0;
}