Problem link : https://www.google.com/url?q=https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1&sa=D&source=editors&ust=1641319881955000&usg=AOvVaw1aEMcHpVWyw5GgW1DePI85
**********************************************************************************************************

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string printMinNumberForPattern(string S)
    {
        string res = "1";
        if (S.size() == 0)
            return res;

        queue<char> q({'2', '3', '4', '5', '6', '7', '8', '9'});
        string t;
        for (auto c : S)
        {
            if (c == 'I')
            {
                if (t.size() != 0)
                {
                    for (int i = t.size() - 1; i >= 0; i--)
                    {
                        res += t[i];
                    }
                    t.clear();
                }
                res += q.front();
                q.pop();
            }
            else
            {
                if (t.size() == 0)
                {
                    t = res.back();
                    res.pop_back();
                }
                t += q.front();
                q.pop();
            }
        }

        for (int i = t.size() - 1; i >= 0; i--)
        {
            res += t[i];
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
// } Driver Code Ends