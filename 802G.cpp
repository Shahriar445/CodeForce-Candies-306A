#include <iostream>
using namespace std;
int main()
{
    string s, str{"heidi"};
    cin >> s;
    int a{0};
    for (char i : s)
    {
        if (a < 5 && i == str[a])
        {
            a++;
        }
    }
    if (a == 5)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}