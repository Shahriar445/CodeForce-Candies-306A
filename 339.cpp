#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i += 2)     // i== 1+2=3, 2+2=4,3+2=5
        for (int j = 0; j < s.size(); j += 2) // j==  1+2=3, 2+2=4,3+2=5
            if (s[i] < s[j])
            {
                swap(s[i], s[j]);
            }
    cout << s;

    return 0;
}
