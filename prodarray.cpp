#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 4, 87};
    int prod = 1;
    int x = sizeof(arr) / 4;
    for (int i = 0; i < x; i++)
    {
        prod = prod * arr[i];
    }
    cout << prod;
}