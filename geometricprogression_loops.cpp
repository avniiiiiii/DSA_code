#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a:";
    cin >> a;
    int b = 1;
    for (int i = 1; i <= a; i++)
    {
        cout << b;
        b = b * 3;//geometric expression
    }
}