// pascal triangle
#include <iostream>
using namespace std;
int fact(int x) // function for calculating factorial
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}
int ncr(int n, int r) // function for calculating  combination
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{ // the program prompts the user to enter a value for n and then generates Pascal's triangle up to the specified row (n).
    // It uses nested loops to iterate through each row and column, printing the binomial coefficients (combinations) at each position.
    int n;
    cout << "enter n:";
    cin >> n;
    // When programming Pascal's triangle, initializing the loop indices with zero makes it align with this mathematical convention
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j);
        }
        cout << endl;
    }
}
// The outer loop (for (int i = 0; i <= n; i++)) is used to iterate over the rows of Pascal's triangle. It starts from zero
// and goes up to n.
// This is a common practice in programming languages, where array indices and loops often start from zero.