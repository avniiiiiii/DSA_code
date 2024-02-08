// combination and permutation with functions and with loops
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    int n = 1;
    // a loop calculates the factorial of a and stores the result in the variable n.
    // It iterates from 1 to a, multiplying the current value of n by the loop variable i in each iteration.
    for (int i = 1; i <= a; i++)
    {
        n = n * i; // findingfactorial
    }
    int r = 1;
    for (int i = 1; i <= b; i++)
    {
        r = r * i; // findingfactorial
    }
    int c = 1;
    for (int i = 1; i <= a - b; i++)
    {
        c = c * i; // This loop calculates the factorial of (a - b) and stores the result in the variable c.
        // It iterates from 1 to (a - b), multiplying the current value of c by the loop variable i in each iteration.
    }
    cout << n / (r * c);
}
