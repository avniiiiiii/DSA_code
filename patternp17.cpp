#include <iostream>4
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    int n;
    cout << "enter n:";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m || j == 1 || j == n) // The condition in the inner loop now checks for the first row (i == 1),
                // last row (i == m)(m is supposed to be the last row), first column (j == 1), and last column (j == n)
                // to determine whether to print an asterisk or a space.
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}