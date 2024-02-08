// print the sum using sizeof operator
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 78, 89, 76, 56, 200, 78};
    int sum = 0;
    int n = sizeof(arr) / 4;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}