#include <iostream>

using namespace std;

int main()
{
    int n, i = -1, t = 1;

    cin >> n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    while (t == 1)
    {
        i++;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] != s[0][i])
                t = -1;
        }
    }
    cout << i;
}
