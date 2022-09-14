// in the name of ALLAH

#include <bits/stdc++.h>
using namespace std;

bool isBlance(char c1, char c2)
{
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == '}');
}
int main()
{
    int n;
    cin >> n;
    bool d = 1;
    stack<char> st;
    while (n--)
    {

        string s;
        cin >> s;

        for (auto u : s)
        {
            if (u == '(' || u == '{' || u == '[')
            {
                st.push(u);
            }
            else
            {
                if (st.empty())
                {
                    d = 0;
                    break;
                }
                else
                {
                    if (isBlance(st.top(), u))

                    {
                        st.pop();
                    }
                    else
                    {
                        d = 0;
                        break;
                    }
                }
            }
        }

        if (!st.empty())
            d = 0;
        if (d)
            cout << "yes";
        else
            cout << "no";
    }
}
