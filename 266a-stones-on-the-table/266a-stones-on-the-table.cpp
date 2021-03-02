#include <iostream>
using namespace std;

main()
{
    int n;
    int res = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i-1] == s[i])
        {
            res += 1;
        }
    }

    cout << res << endl;
    return 0;
}