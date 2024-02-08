// swap numbers using references
#include <iostream>
using namespace std;
void swap(int &x, int &y)//passbyreference

{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{

    int x = 3;
    int y = 8;
    cout << "Before swap: " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap: " << x << " " << y << endl;
}
// the swap function takes references to x and y as parameters.
// This way, any changes made to x and y inside the swap function directly affect the original variables in the main function.