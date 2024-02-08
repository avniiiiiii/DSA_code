// swap using a functions
#include <iostream>
using namespace std;
void swap(int *a, int *b) // In the swap function declaration, it takes two parameters, int *a and int *b, which are pointers to integers.
{
    int temp = *a; // The value pointed to by a (which is the address of x) is stored in a temporary variable temp.
    *a = *b;       // he value pointed to by b (which is the address of y) is assigned to the memory location
    // pointed to by a (which is the address of x). This effectively assigns the value of y to x.
    *b = temp; // the original value of x (stored in temp) is assigned to the memory location pointed to by
    // b (which is the address of y).
}
int main()
{
    int x = 8;
    int y = 9;
    cout << x << " " << y << endl;
    swap(&x, &y); // Here, &x and &y are the addresses of the variables x and y, respectively.
    cout << x << " " << y << endl;
}
// After the swap function is executed, the values of x and y have been swapped
// due to the manipulation of their memory locations through the pointers a and b.