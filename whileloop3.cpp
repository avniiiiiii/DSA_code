// q:print product of digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter number:";
    cin >> a;
    // Initialize product to 1 because 0 is not a multiplicative identity
    int product = 1;
    while (a != 0)
    {
        // extract last digit
        int ld = a % 10;
        // Multiply the digit to the product
        product = product * ld;
        // Remove the last digit from the number
        a /= 10;
    }
    cout << product << endl;
}