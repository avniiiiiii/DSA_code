// q:print number square
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m :";
    cin >> m;
    for (int i = 1; i <= m; i++)//rows
    {
        for (int j = 1; j <= m; j++)//columns
        {
            cout << j;
        }
        cout << endl; // Move to the next line after each row
    }
}
//When a user enters a value for m, the program prints a pattern where each row consists of consecutive numbers from 1 to m,
// and this pattern is repeated for m rows.
// After printing each row, a newline (cout << endl;) is added to move to the next line.