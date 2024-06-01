#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> solve(vector<int> Curr, int n)
    {
        Curr.push_back(1);
        long long Num = 1;

        for (int row = 1; row <= n; row++)
        {
            Num = Num * (n - row + 1);
            Num = Num / row;
            Curr.push_back(Num);
        }
        return Curr;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> Ans;
        Ans.push_back({1});
        vector<int> Curr;

        for (int i = 1; i < numRows; i++)
        {
            vector<int> res = solve(Curr, i);
            Ans.push_back(res);
        }
        return Ans;
    }
};

/*
  Approach
  1 : firstly i push a {1} in the vector of array  Ans.push_back({1});
  2:  for every n i have the calculate n-1 operation bcz {1} is already push which mean for n==1 we already pushed a value
  3:  now one for loop from 1 to < numrow and second loop from 1 to <=n
  4 : before calulating nCr we first push 1 then after num=num*(n-row+1)
  5:  num = num/row;

*/