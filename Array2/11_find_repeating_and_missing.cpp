#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int>mp;
        for(auto&i:grid)
        {
            for(auto&j:i)
            {
                mp[j]++;
            }
        }
        int misiing =0;
        int repeating=0;
        for(int i=1;i<=n*n;i++)
        {
            if(mp[i]==2 )
            {
                repeating = i;
            }
            else if(mp[i]==0 )
            {
                misiing = i;
            }  
            else if(repeating!=0 && misiing!=0)
            {
                break;
            }
        }
       
        return {repeating ,misiing };
    }
};

// Aproach is simple and easy map each element and find first freq ==2 and then freq==0 push into the answer respectively 

// Approach 

class Solution {
public:
   typedef long long ll;
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size()*grid.size();
        ll Sn = ((n)*(n +1))/2;
        ll S =0;
        ll S2 =0;
        ll S2n = ((n)*(n +1)*(2*n+1) );
        S2n = S2n/6;
        for(auto i:grid)
        {
            for(auto j:i)
            {
                S+=j;
                S2+=j*j;
            }
        }
        
        ll M = (((S2n-S2)/(Sn-S)) +(Sn - S)) /2;
        ll R = M - (Sn-S);

        vector<int>r;
        r.push_back(int(R));
        r.push_back(int(M));
        return r;
    }
};