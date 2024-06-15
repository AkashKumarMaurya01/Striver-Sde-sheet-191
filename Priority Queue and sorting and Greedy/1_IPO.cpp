#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>>v(n);

        for(int i=0;i<n;i++)
        {
            v[i] = {capital[i] , profits[i]}; 
        }
        sort(v.begin() , v.end()); // sort according to capital value 
        int i=0;
        priority_queue<int>Pq;
        while(k--)
        {
            while(i<n && w>=v[i].first)
            {
                Pq.push(v[i].second); // Just push the profit value into the pq;
                i++;
            }

            if(!Pq.empty()) // it will just add the top most profitable value into the pq and we add the w ;
            {
                w+=Pq.top();
                Pq.pop(); // if we once add then remove from the Priority queue
            }
        }
        return w; // return the total profit 

         
    }
};