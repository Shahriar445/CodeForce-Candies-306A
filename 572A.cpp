// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k, m;

    cin >> a >> b;
    cin >> k >> m;
    int ai[a];
    int bi[b];
    for (int i = 0; i < a; i++)
    {
        cin >> ai[i]; // array a choose k
    }
    for (int i = 0; i < b; i++)
    {
        cin >> bi[i]; // array b   choose m
    }
    if (ai[k - 1] < bi[b - m])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}