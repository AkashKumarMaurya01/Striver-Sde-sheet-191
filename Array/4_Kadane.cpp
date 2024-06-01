#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum +=nums[i];
            if(sum>maxi)
                maxi = sum;
            if(sum<0)
                sum = 0;
        }
        return maxi;   
    }
};
/*
53. Maximum Subarray

optimal : T O(n) S(n)

Approach : (i) we calculate the sum sum +=nums[i];
            (ii) if  sum is grater than INT_MIN than maxi = sum ans 
            (iii) if sum is coming less than 0 we have to initialzi it with 0 beacause neagative cant give maximum but in case if all the values are negative then it got already udated into the maxi 

 

*/
