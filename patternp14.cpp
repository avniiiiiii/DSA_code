#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter m:";
    cin >> m;
    int a = 1;//a is initialised outside loop so that new starting from 1.
        // By declaring and initializing a outside loop, you ensure that 
        //it doesn't start from 1 for each new row because that is not desired 

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
}