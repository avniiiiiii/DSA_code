// q:prints alphabet star triangle

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << static_cast<char>(j + 96);
        }
        cout << endl;
    }
}
