
#include <iostream>
using namespace std;
void india()
{
    cout << "namaste";
    return; // option but a good practice
}
void usa()
{
    cout << "hello usa" << endl;
    india(); // we can call a function in another function also
}
int main()
{
    usa(); // calling the function
    cout << endl;
    cout << "you are in usa as well as in india" << endl;
}