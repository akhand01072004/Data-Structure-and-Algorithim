/*
Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400] , k = 2
Output: 700
Explanation: arr3  + arr4 = 700, which is maximum.
*/

#include<bits/stdc++.h>
using namespace std;

int maximumSumSubarray(vector<int>& arr, int k){
    int n = arr.size();
    // code here
    int i =0;
    int l = 0;
    int max_sum = INT_MIN;
    int sum = 0;
    for(int j=0; j<n; j++){
        sum = sum + arr[j];
        l++;
        while(l > k){
            
            sum = sum - arr[i];
            i++;
            l--;
        }
        if(l == k){
            max_sum = max(sum,max_sum);
        }
    }
    return max_sum;

}

int main(){
    vector<int> nums = {100,200,300,400};
    int k = 2;
    cout<<maximumSumSubarray(nums,k);
}