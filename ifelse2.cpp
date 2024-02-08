#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter point x:";
    cin >> x;
    int y;
    cout << "enter point y:";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "x and y lie in the first quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "x and y lie in the third quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "x and y lie in the fourth quadrant";
    }
    else
    {
        cout << "x and y lie in the second quadrant";
    }
}