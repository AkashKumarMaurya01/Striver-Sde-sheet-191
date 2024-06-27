#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        mp[0]=1;
        int result=0;
        int sum=0;
        for(auto i :nums)
        {
            sum+=i;
            if(mp.find(sum-k)!=mp.end())
            {
                result+=mp[sum-k];
            }
            mp[sum]++;
        }
        return result;

    }
};
// mp[0]=1
// map karo every sum element of the array
// but if sum-k already map add into the result 
// concep ye h ki sum-k==0 hua matlb sum ==k ho gya agar aage b sum-k some how phle se mapped hua h to matlb sum me k aur add hua hoga
// ya to aise smj lo ki i to k sum ==k , k to n k bich me sum==k ho sakta h wo b subarray add karna h 


// same code little differe of gfg 
class Solution {
  public:
    int maxLen(vector<int>& nums, int n) {
        // Your code here
       
        unordered_map<int,int>mp;
        int maxi = 0; 
        mp[0] =-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(mp.find(sum)!=mp.end())
            {
                int index = i-mp[sum];
                maxi=max(index , maxi);
            }
            else
            {
              mp[sum] =i;
            }
            
        }
        return maxi;
    }
};