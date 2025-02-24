#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> nums) {
    int i = 0, j = 0;
    int n = nums.size();
    int mx_len = 0;
    unordered_map<int, int> mp; // Renamed `map` to `mp`
    
    while (j < n) {  // No need for `i < n` condition
        if (mp.find(nums[j]) == mp.end()) {
            mp[nums[j]] = j;
            mx_len = max(j - i + 1, mx_len);
            j++;
        } else {
            int id = mp[nums[j]];
            while (i <= id) {
                mp.erase(nums[i]);
                i++;
            }
            // No need for `i = id + 1;`
            mp[nums[j]] = j;
            j++;
        }
    }
    return mx_len;
}

int main() {
    vector<int> nums = {4, 3, 2, 5, 1, 3, 4};
    cout << longestSubArray(nums);  // Output should be 4
}
