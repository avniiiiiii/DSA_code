// swap without using a third variable
#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    int y = 9;
    cout << x << " " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}