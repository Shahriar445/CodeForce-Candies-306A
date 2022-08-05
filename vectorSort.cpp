#include <bits/stdc++.h>
using namespace std;
int main()

{
    vector<int> v;
    vector<int>::iterator it;

    v.push_back(10);
    v.push_back(343);
    v.push_back(21);
    v.push_back(32);
    v.push_back(345);
    v.push_back(45);

    sort(v.begin(), v.end());
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "\t";
    }
}