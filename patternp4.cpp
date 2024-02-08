// q:print alphabet square
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << static_cast<char>(j + 64); // The static_cast<char>(j + 64) is used to convert the numeric value j
            // to its corresponding ASCII character.
        }
        cout
            << endl;
    }
}