/*
Given an array arr[] and an integer target.
You have to find the number of pairs in the array whose sum is strictly less than the target.
*/
#include <bits/stdc++.h>
using namespace std;

int countPair(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n - 1;
    int res = 0;
    int sum = 0;
    while (right > left)
    {
        sum = arr[left] + arr[right];
        if (sum < target)
        {
            res += right - left;
            left++;
        }
        else
        {
            right--;
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {5, 2, 3, 2, 4, 1};
    int target = 5;
    cout << countPair(arr, target);
}