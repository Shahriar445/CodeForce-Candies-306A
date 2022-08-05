#include <bits/stdc++.h>
using namespace std;
bool descendingOrder(int a, int b) // declear function for descendignOrder
{
    return (a > b);
}
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

    sort(v.begin(), v.end(), descendingOrder); // descendingOrder  passing function
    for (it = v.begin(); it != v.end(); it++)  // for print the element
    {
        cout << *it << "\t";
    }
}