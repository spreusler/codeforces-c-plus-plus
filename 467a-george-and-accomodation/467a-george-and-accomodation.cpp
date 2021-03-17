#include <iostream>
using namespace std;

main()
{
    int n, p, q, cnt = 0;

    cin >> n;

    while (n--)
    {
        cin >> p >> q;
        if (p + 2 <= q)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}