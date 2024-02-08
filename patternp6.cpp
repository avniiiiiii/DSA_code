// q:print small alphabet rectangle
// there should be a repeated pattern of lowercase letters in each row.

#include <iostream>
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
            cout << static_cast<char>(i + 96); // this line is inside a loop that runs for each column (j)
            // in the given row. As a result, you'll see a repeated pattern of lowercase letters in each row,
            // and the pattern will change for each subsequent row based on the row number.
        }
        cout << endl;
    }
}