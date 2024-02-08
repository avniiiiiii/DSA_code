#include <iostream>
using namespace std;
int main()
{
    int l;
    cout << "enter length:";
    cin >> l;
    int b;
    cout << "enter breadth:";
    cin >> b;
    if ((l * b) > 2 * (l + b))
    {
        cout << "area is greater.";
    }
    else
    {
        cout << "perimeter is greater.";
    }
}