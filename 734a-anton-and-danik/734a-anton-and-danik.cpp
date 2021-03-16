#include <iostream>
using namespace std;

main()
{
    int n, a = 0;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
    }

    if (a > n - a)
    {
        cout << "Anton" << endl;
    }
    else if (a < n - a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}