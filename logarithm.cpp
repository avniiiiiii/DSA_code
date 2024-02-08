// this code implements a function powerlog that calculates the exponentiation of a raised to the
// power b using a divide-and-conquer approach with logarithmic complexity. This is often
//  referred to as "exponentiation by squaring." main focus:less calls
#include <iostream>
using namespace std;
int powerlog(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1) // it checks if b is 1. If so, it returns a because any number raised to the power of 1 is itself.
        return a;
    // If b is neither 0 nor 1, it calculates x = powerlog(a, b / 2). This step recursively calculates a raised to the power of half of b
    int x = powerlog(a, b / 2);

    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a; // If b is odd, it returns x * x * a, which is equivalent to squaring x and then multiplying by a once more.
}
int main()
{
    int a;
    cout << "enter a: ";
    cin >> a;

    int b;
    cout << "enter b: ";
    cin >> b;

    cout << powerlog(a, b) << endl;
}