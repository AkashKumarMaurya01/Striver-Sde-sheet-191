#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) { 
        int n = nums.size();
        unordered_map<int,int>mp;
        long long  count=0;
        int x = 0;
        mp[0]=1;
        for(int i=0;i<n;i++)
        {

            x^=nums[i];
            if(mp.find(x)!=mp.end())
            {
               count+=mp[x];
            }
             mp[x]++; 
        } 
        return count; 
    }
};

// Approach it basically like subarray sum equalls to k 
// we go on continue xor and map it if furtur we got maped xor means recent some xor will be 0 
// exam [4,3,1,2,4] we mapped already mp[0]=1
//  xor 3,1,2 ka xor =0 and 4,3,1,2,4 xor sabka zero hoga answer 2 hai 
// sabhi element ko zero banana which mens sabka xor 0 hoga ..cruks is we have to just find the xor of the array which must be equals to zero 


