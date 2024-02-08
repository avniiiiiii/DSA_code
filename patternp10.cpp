// q:prints reverse star triangle

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
        {                         // The if (i == 1 || i == 3) condition checks if the current row is either 1 or 3
            if (i == 1 || i == 3) // Condition for rows 1 and 3
            {
                cout << static_cast<char>(j + 64); // f the condition is met, it prints characters corresponding to the column position
                // using static_cast<char>(j + 64).
            }
            else
            {
                cout << j; // If the condition is not met, Print regular numeric values for other rows
            }
        }
        cout << endl;
    }
}
