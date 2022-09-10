#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;

    cin >> c;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == '.')
        {
            cout << 0;
        }
        else if (c[i] == '-' && c[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
        else
        {
            cout << 1;
            i++;
        }
    }
}