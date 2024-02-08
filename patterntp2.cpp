// q:print solid square
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;                    // row
    for (int i = 1; i <= m; i++) // Uses nested loops to print a square pattern of asterisks. The outer loop (i) controls the rows.

    {
        for (int j = 1; j <= m; j++) // the inner loop (j) controls the columns.
        {
            cout << "*";
        } // For each row, it prints m asterisks (*), creating a square pattern.
        cout << endl;
    }
}
