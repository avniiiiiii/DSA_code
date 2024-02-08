#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    return m * pow(m, n - 1);
}

int main()
{
    int m;
    cout << "enter base:";
    cin >> m;
    int n;
    cout << "enter power:";
    cin >> n;
    cout << pow(m, n);
}
