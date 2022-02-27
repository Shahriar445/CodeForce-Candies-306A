#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, k;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' || s[i] != 'o' || s[i] != 'y' || s[i] != 'e' || s[i] != 'u' || s[i] != 'i')
        {
            k = k + '.';
            k = k + (char)tolower(s[i]);
        }
    }
    cout << k;

    return 0;
}