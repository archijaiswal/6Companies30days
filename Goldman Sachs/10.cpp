Problem : Find max 10 numbers in a list having 10M entries.

**********************************************************************************************************
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        pq.push(k);

        if (pq.size() > 10)
        {
            while (pq.size() > 10)
                pq.pop();
        }
    }
    while (!pq.empty())
    {
        cout << pq.top();
        pq.pop();
    }
}