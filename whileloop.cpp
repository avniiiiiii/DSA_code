// q:program to count digits of  a number
#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "enter number:";
    cin >> p;
    // Initialize a variable 'count' to 0 to keep track of the number of digits
    int count = 0;
    // Use a while loop to count the number of digits
    while (p != 0)
    {
        // Divide the number by 10 to eliminate the last digit
        p = p / 10;
        count++; // Increment the count for each digit eliminated
    }
    // Display the count, which represents the number of digits in the original number
    cout << "no. of digits are:" << count;
}