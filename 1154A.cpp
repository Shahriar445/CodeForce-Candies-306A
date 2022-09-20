#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x, x + 4);
    long long a, b, c;
    a = x[3] - x[2];
    b = x[0] - a;
    c = x[1] - a;
    cout << a << " " << b << " " << c << endl;
}