#include<bits/stdc++.h>
using namespace std;

int countSubarrayGreaterk(vector<int> nums, int k){
    int n = nums.size();
    int sum = 0;
    int i=0;
    int count = 0;
    for(int j=0; j<n; j++){
        sum += nums[j];
        while(sum >= k){
            count += n-j;
            sum -= nums[i];
            i++;
        }
        
        

    }
    return count;
}

int main() {
   vector<int> nums = {1, 11, 2, 3, 15};
   int k = 10;
   cout<<countSubarrayGreaterk(nums,k);
}