#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int first = nums[0][0];
        int second = nums[0][1];
        for (int i = 1; i < n; i++)
        {
            if (second >= nums[i][0])
            {
                second = max(second, nums[i][1]);
            }
            else
            {
                ans.push_back({first, second});
                first = nums[i][0];
                second = nums[i][1];
            }
        }
        ans.push_back({first, second});
        return ans;
    }
};

/**
  Approach 
     (i) sort the array first we want order in sorted order interval
     (ii) store the first value of the firt arrray and second value with second vlaue array 
     (iii) if the scond value overlap or equal to  the first value of next array the update the second value with second value of next arrray
     (iv) if it did not match the if (second >= nums[i][0]) then push the first and second value and update
     ans.push_back({first, second});  
     first = nums[i][0];
      second = nums[i][1];

      after out from for loop push the remaining one first and second element
*/