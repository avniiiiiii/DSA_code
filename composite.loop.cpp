#include <iostream>
using namespace std;
int main()
{
    int o;
    cout << "enter number:";
    cin >> o;
    for (int i = 2; i <= o / 2; i++) // A for loop that iterates from 2 to o/2.
    {
        if (o % i == 0) // inside the if statement:
                        // cout << "composite number";: If o is divisible by i, it prints "composite number"
        {
            cout << "composite number";
            break; // break;: Exits the loop since the number is already identified as composite.
        }
    }
}
// This program checks for divisibility of the input number o by numbers from 2 to o/2.
//  If the input is divisible by any of these numbers, it prints "composite number."