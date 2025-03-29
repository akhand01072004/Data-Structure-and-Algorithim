#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int len = 0;
        int j=0;
        multiset<int> window;
        for(int i=0; i<n; i++){
            window.insert(nums[i]);
            while(*window.rbegin() - *window.begin() > limit){
                window.erase(window.find(nums[j]));
                j++;
            }

            len  = max(len, i-j+1);
        }
        return len;
}
int main(){
    vector<int> nums = {10,1,2,4,7,2};;
    int limit = 5;
    cout<<longestSubarray(nums,limit);
}
