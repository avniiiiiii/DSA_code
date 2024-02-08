// swap using a third variable
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 7;
    cout << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}