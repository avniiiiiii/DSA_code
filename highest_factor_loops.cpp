// highestfactor
#include <iostream>
using namespace std;
int main()
{
    int p;
    cout << "enter number:";
    cin >> p;

    int f = 1;
    for (int i = 1; i < p; i++) // i<p and not <=p bc we don't want p itself
    {
        if (p % i == 0)
            f = i;
    }
    cout << f << endl;
}