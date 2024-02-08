#include <iostream>
using namespace std;
int fibo(int p)
{
    if (p == 1 || p == 2)
        return 1;
    return fibo(p - 1) + fibo(p - 2);
}

int main()
{
    int p;
    cout << "enter p:";
    cin >> p;
    cout << fibo(p);
}
// fibonacci series=> 1,1,2,3,5,8,13.............//
// nth terms :ist t=1;iind t=1;iird t:2...so on//
// fibo(n)=fib0(n-1)+fibo(n-2)//
// fibo(8)=fibo(8-1)+fibo(8-2)//
