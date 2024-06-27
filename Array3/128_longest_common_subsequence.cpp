// time complexity O(N(long(N)))
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        if(n==0) return n;
        int match=1;
        int maxi =1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1]) continue;
            if(nums[i]+1==nums[i+1] )
            {
                match++;
                // cout<<match<<endl;
            }
            else
            {
              match = 1;
            }
            maxi = max(maxi , match);
        }
        return maxi;
    }
};