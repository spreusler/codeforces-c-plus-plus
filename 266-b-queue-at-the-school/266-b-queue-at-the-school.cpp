#include <iostream>
using namespace std;

main()
{
    int n, t;
    string s, a;

    cin >> n >> t;
    cin >> s;

    a = s;

    while (t--)
    {

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i + 1] == 'G' && s[i] == 'B')
            {
                a[i] = 'G';
                a[i + 1] = 'B';
            }
        }

    s = a;
    }

    cout << a << endl;

    return 0;
}