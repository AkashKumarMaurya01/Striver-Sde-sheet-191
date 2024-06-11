#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long cnt = 0;
    vector<int> temp; // temporary array
    void merge(vector<int>& arr, int low, int mid, int high) {
        int left = low;      // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {  
                temp.push_back(arr[left]);
                left++;
            } else { 
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        //  if elements on the right half are still left //
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // transfering all elements from temporary to arr //
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
        temp.clear();
    }
    void count_reverse_pair(vector<int>&arr , int low , int mid , int high)
    {
        int right = mid+1; 
        for(int i=low;i<=mid;i++)
        {
            while(right<=high && arr[i]>(long long)2*arr[right]) right++;
            cnt+= (right-(mid+1));
        }
    }
    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);      // left half
        mergeSort(arr, mid + 1, high); // right half
        count_reverse_pair(arr , low ,mid, high); // reverse pair counting
        merge(arr, low, mid, high);    // merging sorted halves
    }
    int reversePairs(vector<int>& nums) {

        mergeSort(nums , 0 , nums.size()-1);
        return cnt;
    }
};

/*
   first we are the array 
   then check the condition arr[i] > arr[j]*2 if satisfy the condition then update the cnt = cnt + right -(mid+1)
   then merge the array and sort using merge sort 

*/