#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;

        for (int i = 0; i < n; i++) { 
            if (i > 0 && nums[i] == nums[i - 1]) continue;   // Skip duplicates for i
            for (int j = i + 1; j < n; j++) { 
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j

                int left = j + 1;
                int right = n - 1;
                while (left < right) {
                    long long sum = nums[i];
                    sum+=nums[j];
                    sum+=+ nums[left];
                    sum+= nums[right];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[left],
                                            nums[right]};
                        result.push_back(temp);
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1])left++; // Skip duplicates for left
                        while (left < right && nums[right] == nums[right + 1]) right--; // Skip duplicates for right
                    } 
                    else if (sum < target) left++; 
                    else right--;
                       
                    
                }
            }
        }

        return result;
    }
};

// Approach : 
/*
  hence we need four element that why we are using i , j , left , right
  first for loop indicate i 
  second for loop indicate j 
  and left = j+1 
  and right = n-1;
  0(i) . 1(j) . 2(left) . 3 .4 ............. n-1(right)

  now we use to shrink left and right pointer according to need if sum < target left++ and if sum > target right--;
    

*/