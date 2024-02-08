// q:print the sum of all the even digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    int sum = 0;

    while (m != 0)
    {
        int ld = m % 10;

        // Check if the digit is even
        if (ld % 2 == 0)
        {
            // If it's even, add it to the sum
            sum = sum + ld;
        }

        m = m / 10;
    }
    cout << "The sum of even digits in the given number is: " << sum << endl;
}
// If the user enters 2468, the program will find the sum of even digits (2 + 4 + 6 + 8) and print the result, which is 20.//