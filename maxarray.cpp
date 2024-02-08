// find max value out of all elements in an array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 78, 87, 65};
    // using builtin func
    int n = sizeof(arr) / 4;
    int mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    cout << mx;
}