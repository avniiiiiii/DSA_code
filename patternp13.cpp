//print number triangle .Each row contains odd numbers starting from 1 and incrementing by 2.
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
        {
            cout << 2 * j - 1;//The expression 2 * j - 1 is used to calculate and print odd numbers
        }
        cout << endl;
    }
}
// for each iteration of the inner loop (each value of j), 2 * j - 1 calculates an odd number. It works like this:

//When j is 1: 2 * 1 - 1 = 1
//When j is 2: 2 * 2 - 1 = 3
//When j is 3: 2 * 3 - 1 = 5
//And so on...