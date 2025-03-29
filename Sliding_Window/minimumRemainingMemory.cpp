/*
You are given a list of processes, where each process has a memory consumption value. You are also given a variable m, which represents the number of processes that must be removed contiguously from the list.

Your task is to find the minimum total memory used by the remaining processes after deleting m contiguous processes.
*/
#include <bits/stdc++.h>
using namespace std;

int minimumRemainingMemory(vector<int>& arr, int m) {
    int n = arr.size();
    int i = 0, sum = 0;
    int total_sum = accumulate(arr.begin(), arr.end(), 0);
    int min_sum = INT_MAX;

    for (int j = 0; j < n; j++) {
        sum += arr[j];

        if (j - i + 1 > m) {  // Ensure the window size remains exactly 'm'
            sum -= arr[i];
            i++;
        }

        if (j - i + 1 == m) { // Valid window of size 'm'
            min_sum = min(min_sum, total_sum - sum);
        }
    }
    return min_sum;
}0

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int m = 2;
    cout << minimumRemainingMemory(nums, m);
}
