#include <bits/stdc++.h>
#include <vector>
using namespace std;

main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if(v[i-1] != v[i]){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}