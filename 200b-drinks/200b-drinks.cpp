#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m;
    float res = 0;

    cin >> n;
    m = n;

    while (n--)
    {
        int k;
        cin >> k;
        res += k;
    }

    cout << res / m << endl;

    return 0;
}