#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int matrix_size = 5;
    int input;

    for (int i = 1; i <= matrix_size; ++i)
    {
        for (int j = 1; j <= matrix_size; ++j)
        {
            cin >> input;
            if (input == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
    return 0;
}