#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int index = -1;
        int maxi = INT_MIN;
        int n = nums.size();
        //  max index
        for (int i = n - 1; i >= 1; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                index = i - 1;
                break;
            }
        }

        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        cout << nums[index];
        for (int i = n - 1; i > index; i--)
        {
            if (nums[index] < nums[i])
            {
                swap(nums[index], nums[i]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};

/*
 Approach 

 1 : from end of the array i have to check which nums[i-1]<nums[i]
 2 : if no value of array nums[i-1]<nums[i] is satisfying then reverse the array which is next permutation of the array
 3 : let we find the index of i-1 which is less than i then 
                            (i): store that i-1 
                            (ii) again from end i have to find a value which just greater then nums[i-1] but least from all the value from i-1 to n 
                            (iii) swap nums[i-1] and that value which is just greater than nums[i-1] 
                            (iv) then reverse all the element bcz we have to give the next permutation which mean we havae to give just grateter than initial arrray


                            for example arr = [2 , 1 , 4 , 3 ,2 , 0 , 0 ]
                            if( nums[i-1] < nums[i])
                            {
                                so 1 < 4 
                               index = 1 
                            }
                            ->for(int i=n-1,i>=index;i--)
                           -> swap with traversing which nums[end] is just grater than 1 == nums[i-1]
                           -> swap(2, 1)
                           -> Now the array is 2 , 2  , 4 , 3 , 2 , 0 ,0
                            ->now reverse from (index +1 to n)
                            -> array = [2,2, 0,0,2,3,4]
                            


                            


                         
*/