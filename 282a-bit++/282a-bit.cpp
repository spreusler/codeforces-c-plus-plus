#include <iostream>
using namespace std;

int main()
{
    int n;
    int x = 0;
    string s;

    cin >> n;

    if (n <= 150 && n >= 1)
    {
        while (n--)
        {
            cin >> s;

            if (s == "X++" || s == "++X")
            {
                x++;
            }
            else if (s == "X--" || "--X")
                x--;
            else
            {
                cout << x << endl;
            }
        }
    }

    cout << x << endl;
    return 0;
}