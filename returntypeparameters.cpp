#include <iostream>
#include <cmath> //includelibrarymathfunctions
using namespace std;

void product(int a, int b) // formalparameters,boxes
{
    cout << a * b;
}

void subt(int a, int b)
{
    cout << a - b;
}
// int,bool,char,void,main:return types
void mod(int a, int b)
{
    cout << a % b;
}
void sum(int a, int b) // formalparameters,boxes
{
    cout << a + b;
}
int main()
{
    mod(2, 6);
    cout << endl;
    subt(10, 5);
    cout << endl;
    product(2, 98); // actual parameters[2,98];values
    cout << endl;
    cout << sqrt(5); // libraryfunc
    cout << endl;
}