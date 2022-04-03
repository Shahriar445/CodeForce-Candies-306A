#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (a * b + c == d)
        cout << "YES";
    else if (a * b - c == d)
        cout << "YES";
    else if (a + b * c == d)
        cout << "YES";

    else if (a + b - c == d)
        cout << "YES";
    else if (a - b * c == d)
        cout << "YES";
    else if (a - b + c == d)
        cout << "YES";

    else
    {
        cout << "NO";
    }
}