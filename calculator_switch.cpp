#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    char op;
    cout << "enter operator";
    cin >> op;
    int n;
    cout << "enter n:";
    cin >> n;
    switch (op)
    {
    case '*':
        cout << m * n;
        break;
    case '+':
        cout << m + n;
        break;
    case '%':
        cout << m % n;
        break;
    case '-':
        cout << m - n;
        break;
    case '/':
        cout << m / n;
        break;
    default:
        cout << "invalid operator";
    }
}