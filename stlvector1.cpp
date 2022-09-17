// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p, x;

    cin >> n;
    int a[n + 1];

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cin >> x;
            v.push_back(x);
        }
        if (a[i] == 1)
        {
            cin >> p;
            cout << v[p] << endl;
        }
        if (a[i] == 2)
        {
            v.pop_back();
        }
    }
}