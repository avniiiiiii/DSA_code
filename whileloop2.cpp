// q:print sum of digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int sum = 0;
    // Calculate the sum of digits
    while (n != 0)
    { // 1234%10=4
        int last_digit = n % 10;
        // Add the digit to the sum
        sum = sum + last_digit;
        // Remove the last digit from the number
        n = n / 10;
    } // Display the sum of digits
    cout << "Sum of digits: " << sum << endl;
}
