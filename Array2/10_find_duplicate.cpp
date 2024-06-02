#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

       while(nums[0]!=nums[nums[0]])
       {
          swap(nums[0] , nums[nums[0]]);
       }
       return nums[0];
    }
};

/*
   Approach 
       (i) we know than every nums[i] is greater than or equal to 1 and length is n+1 and elements are [1 n]
       (ii) we can swap nums[0] with other nums[nums[0]] till nums[0]!=nums[nums[0]] 
       (iii) which means same value occur at different index 

*/