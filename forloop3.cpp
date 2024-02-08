// q:print the sum from 1 to 'n'
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number:";
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        // Add the current value of 'i' to the sum
        sum = sum + i;
    }
    cout << sum;
}
// If the user enters 5, the program calculates the sum (1 + 2 + 3 + 4 + 5) and prints the result, which is 15.