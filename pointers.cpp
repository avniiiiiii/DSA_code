
#include <iostream>
using namespace std;

int main()
{
    int p = 999;
    int *ptr = &p;
    cout << p << endl;
    *ptr = 23;
    cout << p << endl;
    cout << *ptr << endl;
}
//&x : address of x(variable)
// int*:pointer