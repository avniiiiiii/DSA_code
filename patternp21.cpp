#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++) // to iterate through each row.
    {                            // Loop to print spaces before the asterisks
        for (int j = 1; j <= m - i; j++)
        {
            cout << " ";
        }
        // Loop to print asterisks
        for (int j = 1; j <= m; j++) //  each row has m asterisks,
        {
            cout << "*";
        }
        cout << endl;
    }
}