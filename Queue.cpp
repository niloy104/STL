#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Size if queue: " << q.size() << endl;
    cout << q.front() << endl; // Print first element in queue

    q.pop(); // Delete first element in queue

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    cout << "Size if queue: " << q.size();
}