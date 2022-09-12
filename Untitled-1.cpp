//                           In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    if (s.size() <= 1)
        cout << "NO";
    else
        cout << *(++s.begin());
}