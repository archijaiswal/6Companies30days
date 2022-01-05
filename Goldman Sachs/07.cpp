Problem link : https://www.google.com/url?q=https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/&sa=D&source=editors&ust=1641319881954000&usg=AOvVaw3v7ctBSlnS-9FytC0buAmN

**********************************************************************************************************

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {

        if (N == 1)
        {
            return 1;
        }
        // code here
        int temp = M % N + K - 1;
        if (temp == N)
            return temp;
        else
            return temp % N;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }
    return 0;