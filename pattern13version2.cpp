// print number triangle .Each row contains odd numbers starting from 1 and incrementing by 2.
#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int a = 1; // The pattern you want involves printing consecutive odd numbers on each row, starting from 1.
        // By declaring and initializing a inside the inner loop, you ensure that it starts from 1 for each new row.
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a = a + 2;
        }
        cout << endl;
    }
}
