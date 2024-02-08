// write a program to print the sum of a given number and its reverse
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    int reverse = 0;
    int sum = 0;
    int originalvalue = num;
    while (num != 0)
    {
        { // Extract the last digit
            int last_digit = num % 10;
            // Multiply the reversed number by 10 and add the last digit
            reverse = reverse * 10 + last_digit;

            // Remove the last digit from the original numberS
            num = num / 10;
        }
        // Calculate the sum of the original number and its reverse
        sum = originalvalue + reverse;
    }
    // Print the original number, its reverse, and the sum
    cout << "Original Number: " << originalvalue << endl;
    cout << "Reversed Number: " << reverse << endl;
    cout << "Sum of " << originalvalue << " and its reverse is: " << sum << endl;
}

// Reverse the Number:
// Use a while loop to reverse the digits of the number.
// Extract the last digit and add it to the reversed number.
// Calculate the Sum:Calculate the sum of the original number and its reverse.
// Display the original number, its reverse, and the sum.
// example:If the user enters 123,
// the program will reverse it to 321 and calculate the sum (123 + 321), which is 444.
//  The program then prints the original number, reversed number, and the sum.