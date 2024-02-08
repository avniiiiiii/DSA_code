// q:print product of digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter number";
    cin >> a;
    // Initialize reversed number to 0
    int rev = 0;

    while (a != 0)
    { // Extract the last digit
        int ld = a % 10;
        // Multiply the reversed number by 10 and add the last digit
        rev = rev * 10 + ld;

        // Remove the last digit from the original numberS
        a = a / 10;
    }
    // Display the reversed number
    cout << "reverse of the given number is:" << rev;
}