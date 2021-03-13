#include <iostream>
using namespace std;

main()
{
    int x, num_steps = 0;

    cin >> x;

    while (x > 0)
    {
        for (int i = 5; i > 0; i--)
        {
            if (x - i >= 0 )
            {
                x = x - i;
                num_steps += 1;
                break;
            }
        }
    }

    cout << num_steps << endl;

    return 0;
}