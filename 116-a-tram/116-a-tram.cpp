#include <iostream>
using namespace std;

int main()
{
    int n, a, b, diff_passengers = 0, curr_passengers = 0, max_capacity = 0;

    cin >> n;

    while (n--)
    {
        cin >> a >> b;
        diff_passengers = b - a;
        curr_passengers += diff_passengers;

        if(curr_passengers > max_capacity) {
            max_capacity = curr_passengers;
        }

    }

    cout << max_capacity << endl;

    return 0;
}