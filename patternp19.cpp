// q:print the mix of reverse and star triangle

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++) // to iterate through each row.
    {                            // Loop to print spaces before the asterisks
        for (int j = 1; j <= m - i; j++)
        {
            cout << " ";
        }
        // Loop to print asterisks
        for (int j = 1; j <= i; j++) // it prints asterisks to form the right-angled triangle.
        {
            cout << "*";
        }
        cout << endl;
    }
}
//m - i is the expression that determines the maximum number of spaces to be printed in a given row. As i increases 
//(moving down the rows),// the value of m - i decreases.So, during the first row (i = 1), it prints m - 1 spaces. 
//During the second row (i = 2), //it prints m - 2 spaces, and so on.This arrangement results in a right-angled triangle with its base
// aligned to the right side,as each row has an increasing number of asterisks and a decreasing number of spaces before them.
//For example, if m is 5:
//In the first row (i = 1), it prints 4 spaces before the asterisk.
//In the second row (i = 2), it prints 3 spaces before the two asterisks.
//And so on, until the last row (i = 5), where there are no spaces before the five asterisks.