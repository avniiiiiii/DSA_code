#include <iostream>
using namespace std;
int main()
{
    int o;
    cout << "enter o:";
    cin >> o;
    (o % 2 == 0) ? cout << "even" : cout << "odd";
}