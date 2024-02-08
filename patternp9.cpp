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
        for (int j = 1; j <= m + 1 - i; j++) // The inner loop controls the columns within each row.
        // The number of columns in each row decreases as i increases.
        {
            cout << static_cast<char>(j + 64);
        }
        cout << endl;
    }
}
// consider an example to illustrate how this loop(j <= m + 1 - i) works when m = 4:

// 1st iteration (i = 1):

// j starts at 1 and continues until j <= 4 + 1 - 1, so the loop runs for j = 1, 2, 3, 4. It prints characters corresponding to these column positions.
// 2nd iteration (i = 2):

// j starts at 1 and continues until j <= 4 + 1 - 2, so the loop runs for j = 1, 2, 3. It prints characters corresponding to these column positions.
// 3rd iteration (i = 3):

// j starts at 1 and continues until j <= 4 + 1 - 3, so the loop runs for j = 1, 2. It prints characters corresponding to these column positions.
// 4th iteration (i = 4):

// j starts at 1 and continues until j <= 4 + 1 - 4, so the loop runs for j = 1. It prints a character corresponding to this column position.
// This nested loop structure, along with the condition m + 1 - i, results in the decreasing number of columns for each row as i increases.