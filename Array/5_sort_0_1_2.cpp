#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int left = 0;
        int mid = 0;
        int right = nums.size() - 1;

        while (mid <= right)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[left]);
                left++;
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[right]);
                right--;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
        }
    }
};

/**
  
  Approach :
   we use three pointer for each 0 1 and 2 , left mid right  respectively
   if(arr[mid]==0) make it into left side and then swap(nums[mid], nums[left]); ,left++ right++ bcz left wil be alway point either 1 or 2 which help in swaping with arr of mid
   if(arr[mid]==2) make it into the right and we make only swap(nums[mid], nums[right]); right-- , not mid++ beacuse we dont know what value will come from right side it may 0 , may 1 or 2 we will handle it seperatly 
   if(arr[mid]==1) we make it mid++ only 


*/
