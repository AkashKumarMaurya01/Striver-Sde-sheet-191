#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int e = nums1.size() - 1;
        n = n - 1; // For indexing
        m = m - 1; // for index hme 1 minus krke na likhana pade

        while (n >= 0 && m >= 0)
        {
            if (nums1[m] > nums2[n])
            {
                nums1[e] = nums1[m];
                m--;
            }
            else
            {
                nums1[e] = nums2[n];
                n--;
            }
            e--;
        }
        while (n >= 0)
        {
            nums1[e] = nums2[n];
            n--;
            e--;
        }
    }
};

/*   
   Approach 
    while(n>=0 && m>=0)
    {
     agr sorted array ka last element jo ji sabse bad h agr ho jab ta mth element of nums1 se bada 
     usako endwhich means (nums[e]) me dalte jao aur e-- , m-- karte jao 
     Pura concept bas itna h ki last se nums2 to traverse krte hue aao
     agr mth of nums1 ka bada hua to usako end me dal do e-- , n-- dono update karo  
    }
     while (n >= 0)
        {
            nums1[e] = nums2[n];
            n--;
            e--;
        }
        ^^
        ||
    agar nums2 ka koi b element bada reh gya nums1 ka sare element se to wo b hme dalana hoga nums1[e]
    jabki nums1 ka sare element nums1 k right me ja chuke honge jo chote rhe honge kyuki wo wo chote the nums2 k nums2[n] se

*/

// Second solution 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       for(int i=m;i<m+n;i++)
       {
          nums1[i] = nums2[i-m];
       }
       sort(nums1.begin(), nums1.end());

    }
};