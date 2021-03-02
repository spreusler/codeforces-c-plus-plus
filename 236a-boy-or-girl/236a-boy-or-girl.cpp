#include <bits/stdc++.h>

using namespace std;

int main()
{
    int length, res = 1;
    char s[101];

    cin >> s;

    length = strlen(s);
    sort(s, s + length);

    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] != s[i + 1])
            res++;
    }

    if (res % 2 == 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}