// print star plus
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    int mid = m / 2 + 1; // calculates the midpoint mid as m / 2 + 1.
    // uses nested loops to iterate over rows and columns to print either an asterisk (*) or a space.
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == mid || j == mid) // If the current row index i is equal to the calculated midpoint mid,
                // or if the current column index j is equal to mid,
                // it prints an asterisk; otherwise, it prints a space.
                cout << "*";

            else
                cout << " ";
        }
        cout << endl;
    }
}