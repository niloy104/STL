#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int fib(int n)
{
    if (n = 0)
    {
        return 0;
    }
    if (n = 1)
    {
        return 1;
    }
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}
int main()
{
    int n1;
    cin >> n1;
    cout << "Factorial is: " << fact(n1);
    cout << endl;
    int n2;
    cin >> n2;
    cout << "Fibonacci is: " << fib(n2);
}