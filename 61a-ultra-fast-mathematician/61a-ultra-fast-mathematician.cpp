#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2, res = "";

    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '1' || s2[i] == '1')
        {
            if (s1[i] == '1' && s2[i] == '1')
            {
                res += "0";
            }
            else
            {
                res += "1";
            }
        }
        else
        {
            res += "0";
        }
    }

    cout << res << endl;

    return 0;
}