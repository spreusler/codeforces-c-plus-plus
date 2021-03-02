#include <iostream>
using namespace std;

main()
{
    string s, res;
    int one = 0;
    int two = 0;
    int three = 0;
    cin >> s;

    for (int i = 0; i < s.length(); i+=2)
    {
        if (s[i] == '1')
        {
            one += 1;
        }
        if (s[i] == '2')
        {
            two += 1;
        }
        if (s[i] == '3')
        {
            three += 1;
        }
    }

    for (int i = 0; i < one; i++)
    {
        res += "1+";
    }
    for (int i = 0; i < two; i++)
    {
        res += "2+";
    }
    for (int i = 0; i < three; i++)
    {
        res += "3+";
    }
    res = res.substr(0, res.length() - 1);
    cout << res << endl;
}
