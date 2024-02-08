// print factorial of n using recurrsion

#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1 || x == 0)
        return 1; // base condition
    return x * fact(x - 1);
}
int main()
{
    int x;
    cout << "enter x:";
    cin >> x;
    cout << fact(x);
}