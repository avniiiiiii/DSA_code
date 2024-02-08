//swap numbers using pointers
#include <iostream>
using namespace std;
void swap(int &x, int &y){
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
    cout << "After swap: " << x << " " << y << endl;}
