// calculate combination of two numbers
#include <iostream>
using namespace std;
int fact(int num) // This function, fact, takes an integer num as input and calculates the factorial of that number using a loop.
// It iterates from 1 to num, multiplying the current result by the loop variable i in each iteration.
{
    int f = 1; // the f variable is used to accumulate the factorial value.
    // It starts with an initial value of 1 and is multiplied by each value from 1 to num in the loop to calculate the factorial of num.
    for (int i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int n, r;
    cout << "enter n:";
    cin >> n;
    cout << "enter r:";
    cin >> r;
    int a = fact(n);     // a=n!
    int b = fact(r);     // b=r!
    int c = fact(n - r); // c=(n-r)!
    cout << "combination of n and r is " << a / (b * c);
}
// in permutation and combination, r needs to be smaller than n
