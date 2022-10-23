#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st; // Declare stack

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << st.top(); // Access first element
    st.pop();         // Delte top element on stack
    cout << st.top();

    cout << st.size();

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}