#include <bits/stdc++.h>
using namespace std;

int main()
{
    // priority_queue<int>pq; //Default Priority queue
    // priority_queue<int, vector<int>, greater<int>> pq; //using comparetor for accending order
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({1, 2});
    pq.push({4, 2});
    pq.push({3, 2});
    pq.push({6, 2});
    pq.push({5, 2});

    //  cout<<pq.top(); //give max value

    while (!pq.empty())
    {
        cout << pq.top().first << " "<<pq.top().second<<endl;
        pq.pop();
    }

    cout << "\nsize: " << pq.size(); // size

    // Time Complexity -  O(log2n)
}