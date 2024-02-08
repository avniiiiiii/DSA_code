// swap using a functions(pass by value)
#include <iostream>
using namespace std;
void swap(int x, int y) // not same as main function .ye naye variables create hue hai  with the same name
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 3;
    int y = 8;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
}
// function parameters are typically passed by value.
// This means that when you call the swap function with x and y, the values of x and y in the main function are copied
// to the parameters x and y in the swap function. Any changes made to x and y within the swap function only affect the local copies, and
// these changes do not reflect back to the original variables in the main function.
// To achieve a successful swap, you can use references or pointers.