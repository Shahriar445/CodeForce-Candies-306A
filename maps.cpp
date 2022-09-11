// IN The name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    map<string, int> m;
    while (q--)
    {

        int type, y;
        string x;
        cin >> type >> x;
        switch (type)
        {
        default:
            return 0;
        case 1:
            cin >> y;
            if (m.find(x) != m.end())
            {
                m[x] += y;
            }
            else
                m.insert({x, y});
            break;
        case 2:
            m.erase(x);
            break;
        case 3:
            cout << (m.find(x) == m.end() ? 0 : m[x]) << endl;
            break;
        }
    }
}