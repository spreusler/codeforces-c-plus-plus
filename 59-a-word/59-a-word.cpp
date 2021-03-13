#include <iostream>
using namespace std;

main()
{

    string s;
    int num_uppercase = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97)
        {
            num_uppercase += 1;
        }
    }

    if (num_uppercase <= s.length() - num_uppercase)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] < 97)
            {
                s[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] -= 32;
            }
        }
    }

    cout << s << endl;

    return 0;
}