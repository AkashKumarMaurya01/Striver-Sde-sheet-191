#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        // map each number of the grid  
        for(auto&i:grid)
        {
            for(auto&j:i)
            {
                mp[j]++;
            }
        }
        // first we push duplpicate
        for(int i=1;i<=n*n;i++)
        {
               if(mp[i]==2 )
               {
                 ans.push_back(i);
                 break;
               }
              
        }
        // Now we push missing number
        for(int i=1;i<=n*n;i++)
        {
               if(mp[i]==0 )
               {
                 ans.push_back(i);
                 break;
               }
              
        }
        return ans;
    }
};

// Aproach is simple and easy map each element and find first freq ==2 and then freq==0 push into the answer respectively 
