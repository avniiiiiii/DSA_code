// print sum of 1 to n
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;          // basecase:if n = 1 the func is expected to return value 1
    return n + sum(n - 1); // function call:recursion
}
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    cout << sum(n);
}