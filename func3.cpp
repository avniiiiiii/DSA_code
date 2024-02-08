// calculate permutation of two numbers
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int n = factorial(a);
    int r = factorial(b);
    int c = factorial(a - b);

    cout << "Permutation of " << a << " choose " << b << " is: " << n / c << endl;

    return 0;
}
// in permutation and combination, r needs to be smaller than n
