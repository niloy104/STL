#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n <= 3)
    {
        return true;
    }
    else if (n == 5)
    {
        return true;
    }
    else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    prime(n);
    if (prime(n) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}