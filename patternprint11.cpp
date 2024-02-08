// q:prints reverse number triangle with same no. on subsequent rows
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}