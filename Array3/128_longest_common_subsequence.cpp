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

// Second solution O(N) and O(N);
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>st;
        for(auto i:nums) st.insert(i);
         int maxi = 0;
        for(auto i :st)
        {
            if(st.find(i-1)==st.end())
            {
                int count=1;
                int x = i+1;
                while(st.find(x)!=st.end())
                {
                    count++;
                    x+=1;
                }
                maxi = max(maxi , count);
            }
        }
        return maxi;   
    }
};

/* 
 Approach : first we put all the element into the set for searching unique element 
           : second we find a element in the set in which the element less then 1 
              100 , 200 , 1 , 3 , 4 , 2 
              example: is (100-1)==99 present or not -->its not present move furthur and then find 100+1 presend or not if yes count++ else go to next 
                      is (200-1)==0 present or not -->its not present move furthur and then find 100+1 presend or not if yes count++ else go to next 
                      similary 1-1 ==0 present ->its not present go to search for seach x= 1+1 , , x=x+1 , while it is presnt count++ 
                      
                   1 ,2, 3, 4 presnt count =4 
                   max = 4 answer
*/