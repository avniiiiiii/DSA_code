// Q:print the factorial of a given number n
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num:";
    cin >> num;
    int product = 1;
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    cout << "the factorial of the given number is"
         << " " << product;
}
//expected output:If the user enters 5, the program calculates the factorial (5! = 5 * 4 * 3 * 2 * 1) and prints the result, which is 120.