#include<bits/stdc++.h>
using namespace std;

int numberOfSubArray(vector<int> nums, int k){
    int n = nums.size();
    int count = 0;
    int i=0;
    int sum = 0;
    for(int j=0; j<n; j++){
        sum = sum + nums[j];
        while(sum > k){
            sum -= nums[i];
            i++;
        }
        count += (j - i + 1); 
    }
    return count;
}
int main(){
    vector<int> nums = {2,1,1,5,8};
    int k = 4;
    cout<<numberOfSubArray(nums,k);
}