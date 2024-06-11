#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        vector<int>v;
        for(auto i:mp)
        {
             if(i.second>nums.size()/3 )
             {
              v.push_back(i.first);
             }
        }
        return v;

        
    }
};

// simply we count the freq of the each element and just push the element whose freq is greater than n/3 