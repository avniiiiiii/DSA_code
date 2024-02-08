// q:print the sum from 1 to 'n'
#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter num:";
    cin >> num;
    // Loop through numbers from 1 to n and print their factorials

    for (int i = 1; i <= num; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }
        // Print the factorial of the current number
        cout << "Factorial of " << i << ": " << factorial << endl;
    }
}
// This program uses two nested for loops. The outer loop iterates (i)from 1 to n, representing each number for which the
// factorial needs to be calculated.
//  The inner loop calculates the factorial of the current number(j). The result is then printed for each number.