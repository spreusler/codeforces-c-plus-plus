#include <iostream>
using namespace std;

main()
{
    int res = 0;
    string s;

    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            res++;
        }
    }
    if (res == 4 || res == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}