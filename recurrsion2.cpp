#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0) // base condition:if n becomes 0 ,stop recurrsion
        return;
    print(n - 1); // each recursive call is made before printing the current value of n, the numbers are eventually
    // printed in ascending order
    cout << n << endl;
}
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    print(n);
}