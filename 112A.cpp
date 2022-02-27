#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100], s2[100];
    cin >> s1 >> s2;
    strlwr(s1);
    strlwr(s2);
    cout << strcmp(s1, s2) << endl;
}