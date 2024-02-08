#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0) // checks whether the sum of the row index i and the column index j is an even number.
                // The % operator is the modulus operator, which returns the remainder of the division of its left operand by
                // its right operand.
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
}
