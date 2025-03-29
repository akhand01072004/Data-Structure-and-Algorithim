#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector<int> nums, int k){
    int sum = 0;
    int i=0;
    int count = 0;
    for(int j=0; j<nums.size(); j++){
        sum += nums[j];
        while(sum >= k){
            sum -= nums[i];
            i++;
        }
        count += (j-i+1);
        

    }
    return count;
}

int main() {
   vector<int> nums = {1, 11, 2, 3, 15};
   int k = 10;
   cout<<countSubarray(nums,k);
}