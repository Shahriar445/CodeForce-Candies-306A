#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    string s;
    cin >> s;
    cin >> n;
    string a[20] = {"January",
                    "February",
                    "March",
                    "April",
                    "May",
                    "June",
                    "July",
                    "August",
                    "September",
                    "October",
                    "November",
                    "December"};

    for (i = 0;; i++)
    {
        if (a[i] == s)
            break;
    }
    cout << a[(n + i + 12) % 12];
}