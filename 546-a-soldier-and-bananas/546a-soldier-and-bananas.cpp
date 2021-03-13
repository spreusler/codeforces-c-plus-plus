#include <iostream>
using namespace std;

main()
{
    int k, n, w, cost_per_banana, total_costs = 0;

    cin >> k >> n >> w;

    for (int i = 1; i < w + 1; i++)
    {
        cost_per_banana = i * k;
        total_costs = total_costs + cost_per_banana;
    }

    if (total_costs <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << total_costs - n << endl;
    }
}