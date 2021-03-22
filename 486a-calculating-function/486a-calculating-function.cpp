#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, res;
    cin >> n;
    if (n % 2 == 0)
    {
        res = n / 2;
    }
    else
    {
        res = ((n - 1) / 2) - n;
    }
    cout << res << endl;
    return 0;
}