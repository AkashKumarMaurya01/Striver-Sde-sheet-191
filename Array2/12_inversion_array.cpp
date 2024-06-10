#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long cnt = 0;
    vector<int> temp; // temporary array
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        int left = low;      // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                cnt += mid - left + 1;
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }

        //  if elements on the right half are still left //
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }

        // transfering all elements from temporary to arr //
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
        temp.clear();
    }

    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);      // left half
        mergeSort(arr, mid + 1, high); // right half
        merge(arr, low, mid, high);    // merging sorted halves
    }
    bool isIdealPermutation(vector<int> &nums)
    {
        int local = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                local++;
            }
        }
        mergeSort(nums, 0, n - 1);
        return cnt == local;
    }
};