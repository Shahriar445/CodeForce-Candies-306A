/******************************************************************************

this is a cool problem in codeforce
           problme name is Way Too Long Words

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, t;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        t = s.size();

        if (t > 10)
        {
            cout << s[0] << t - 2 << s[t - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}
