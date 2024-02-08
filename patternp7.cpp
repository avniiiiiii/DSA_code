// q:prints a pattern of asterisks in the form of a right-angled triangle,
// where the number of asterisks in each row increases with the row number. (star triangle)
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++) // The inner loop controls the columns within each row. It iterates from 1 to the current value of i.
        {
            cout << "*";
        }
        cout << endl;
    }
}
