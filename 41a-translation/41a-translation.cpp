#include <iostream>
using namespace std;

main()
{
    string s, t;

    cin >> s;
    cin >> t;

    for (int i = 0; i < t.length() / 2; i++)
    {
        swap(t[i], t[t.length() - 1 - i]);
    }

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}