#include <iostream>
using namespace std;

int main()
{
    int n, Petya, Vasya, Tonya;
    int count = 0;

    cin >> n;

    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}