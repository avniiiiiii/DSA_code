#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a:";
    cin >> a;
    int b;
    cout << "enter b:";
    cin >> b;
    int c;
    cout << "enter c:";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is the  greatest";
        }
        else
        { // c>a
            cout << "c is the  greatest";
        }
    }
    else
    { // b>a
        if (b > c)
        {
            cout << "b is the greatest";
        }
        else
        { // c>b
            cout << "c is the geatest";
        }
    }
}