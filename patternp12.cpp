#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j >= 1; j++)
        {
            cout << j - i - 1;
        }
        cout << endl;
    }
}
