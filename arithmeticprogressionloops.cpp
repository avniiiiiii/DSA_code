//Q:DISPLAY AN AP UPTO N TERMS//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    // extra variable method
    int a = 9;
    for (int i = 1; i <= n; i++)// A for loop that iterates from 1 to n.
    {
        cout << a;
        a = a + 1; //Increments the value of a by 1 in each iteration.
    }
}
// This program prints the values of a in a sequence,
// starting from 9 and incrementing by 1 in each iteration of the loop, for a total of n iterations.