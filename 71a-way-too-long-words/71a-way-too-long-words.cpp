#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s.front() << s.length() - 2 << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}