Problem link:https://www.google.com/url?q=https://leetcode.com/problems/minimum-size-subarray-sum/&sa=D&source=editors&ust=1641319881958000&usg=AOvVaw2BC_1BhHxk-bjoRHODCo2X

**********************************************************************************************************
class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int n = nums.size();
        int ans = INT_MAX;
        int left = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            while (sum >= s)
            {
                ans = min(ans, i + 1 - left);
                sum -= nums[left++];
            }
        }
        return (ans != INT_MAX) ? ans : 0;
    }
};