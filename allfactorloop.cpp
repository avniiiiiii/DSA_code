#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "enter number:";
    cin >> p;

    for (int i = 1; i < p; i++) // i<p and not <=p bc we don't want p itself
    {
        if (p % i == 0)
            cout << i << endl;
    }
}
