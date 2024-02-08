// print n to 1
#include <iostream>
using namespace std;
void print(int a)
{
    if (a == 0)
        return;
    cout << a << endl;
    print(a - 1); // recursion
}
int main()
{
    print(11);
}