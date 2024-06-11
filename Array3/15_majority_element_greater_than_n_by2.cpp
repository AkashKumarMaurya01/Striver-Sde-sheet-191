#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int majority = INT_MIN;
        for(auto i:mp)
        {
             if(i.second>nums.size()/2 && majority <i.first )
             {
                majority = i.first;
             }
        }
        return majority;
        
    }
};