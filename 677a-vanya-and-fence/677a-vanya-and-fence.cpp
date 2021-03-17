#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, h, cnt = 0;

    cin >> n >> h;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        array[i] = val;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > h)
        {
            cnt += 2;
        }
        else
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
