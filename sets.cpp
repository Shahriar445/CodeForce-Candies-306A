//                             IN THE NAME OF ALLAH

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int q;
    cin >> q;
    set<int> s;

    while (q--)
    {
        int typ, x;

        cin >> typ >> x;
        if (typ == 1)
        {
            s.insert(x);
        }
        else if (typ == 2)
        {
            s.erase(x);
        }
        else
        {
            if (s.count(x) == 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
}