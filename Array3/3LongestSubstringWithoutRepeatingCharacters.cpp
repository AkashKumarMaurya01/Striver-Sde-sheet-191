#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
        int n = s.size();
        unordered_map<int,int>mp;
         
        int left =0;
        int right=0;
        int maxlen=0;
        while(right<n)
        {
            if(mp.find(s[right])!=mp.end())
            {
                left = max(left , mp[s[right]]+1);
            }
            mp[s[right]] =right; // map kiya 
            maxlen = max(maxlen , right-left+1);   //window ki value update kiya
            right++; // aage badha diye right pointer

        }
        return maxlen;


        
    }
};
// hm left value mp[s[right]] +1  isliye le rhe ki kahi map me presnt mp[s[right]] left to right window me ho kahi aisa na ho ki wo left k piche ho exam ko dry run karo second time b left to right window k piche h  a b c a a b c d b a 
// map karte jao agar same value map me phir se last time jaha mila tha wahi se ek aage badh do left ko  bas ek baat ka dyan dena last time same value jaha mili thi wo curr window k under hona chanhiue hone chaiye jiske liye max(mp[s[right]]+1 , left) hm use kiye h