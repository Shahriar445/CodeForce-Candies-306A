// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, op, t, x;

    cin >> n >> q;
    vector<int> v[n];

    while (q--)
    {
        cin >> op >> t;

        if (op == 0)
        {
            cin >> x;
            v[t].push_back(x);
        }
        else if (op == 1)
        {
            if (!v[t].empty())
                cout << v[t][0];
            for (int i = 1; i < v[t].size(); i++)
            {
                cout << " " << v[t][i];
            }
            cout << "\n";
        }
        else
            v[t].clear();
    }
}
