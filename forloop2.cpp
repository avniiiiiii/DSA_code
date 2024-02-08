// forloop
// syntax:
// for(increment+declaration;condition;increment/decrement){
// code}

// Q:print the table of "n". here n is an integer which user will input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    // method 1
    for (int i = n; i <= (n * 10); i += n)
    {
        cout << i << endl;
    }
    // method2 using if statement with loops
    // for (int i = n; i <= n * 10; i++)
    // {
    //     if (i % n == 0)//i=4 4%2=0 print 4
    //         cout << i << endl;
    // }
}