#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int n = prices.size();
       int max_profit = 0;
       int mini = INT_MAX;
       for(int i =0;i<n;i++)
       {
         if(mini>prices[i])
         {
            mini = prices[i];
         }
         int today_profit = prices[i] - mini;
         if(max_profit < today_profit)
         {
            max_profit = today_profit;
         }
         
       } 
       return max_profit;
    }
};

/*
   Aproach two for loop isgiving tle 

   bow we have to shift on O(n) time complexity

   Approach 
        (i) we start with taking a number which is mini 
        (ii) and we also calculate today_profit which mean iteraing each element minimum is stored in mini which give maximum profit after substracting with  prices[i] - mini 
        (iii) we also taking a max_profit variable if max_profit is less than today profit make is change with today_profit and updated it  

*/ 