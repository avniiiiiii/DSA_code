// q:print small alphabet rectangle (m and n will differ) 
#include <iostream>
using namespace std;
int main()
{

    int m;
    cout << "enter m:";//rows
    cin >> m;
    int n;
    cout << "enter n:";//col
    cin >> n;
    for (int i = 1; i <= m; i++)//row
    {
        for (int j = 1; j <= n; j++)//column
        {
            cout << static_cast<char>(j + 96);
        }
        cout << endl;
    }
}
