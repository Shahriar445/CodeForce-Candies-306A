// in the name of ALLAH

#include <bits/stdc++.h>

using namespace std;
#define opt()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    opt();
    long long int c, rem, cnt = 0;
    cin >> c;
    while (c)
    {
        rem = c % 10;
        c = c / 10;
        if (rem == 4 || rem == 7)
            cnt++;
    }
    if (cnt == 4 || cnt == 7)
        cout << "YES";
    else
        cout << "NO";
}