#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0;i<row;i++)
        {
           
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    for(int k=0;k<col;k++)
                    {
                        if( matrix[i][k]!=0 && k!=j && matrix[i][k])
                        {
                          matrix[i][k]=-11;
                        }
                    }
                    for(int k=0;k<row;k++)
                    {
                        if(matrix[k][j]!=0 &&k!=i)
                        {
                            matrix[k][j]=-11;
                        }
                    }
                    
                
                }
            }
           
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==-11)
                {
                    matrix[i][j] = 0;
                }
            }
        }


        
    }
};

/*

Approach :
  1 trverse through all the element of the array and if we find arr[i][j]==0 
  2 : then we replace all the row and col value with -1 or any other value in the array 
  3 : again we traverse through all the element and if we find -1 or -11 we replace with 0
  */