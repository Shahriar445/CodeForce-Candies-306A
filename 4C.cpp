#include <bits/stdc++.h>
using namespace std;
#define yes printf("YES\n")
#define no printf("NO\n")
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    op();

    int n;
    cin >> n;
    map<string, int> ch;
    while (n--)
    {
        string s;
        cin >> s;

        if (ch[s] == 0)
            cout << "OK\n";
        else
            cout << s << ch[s] << "\n";

        ch[s]++;
    }

    return 0;
}