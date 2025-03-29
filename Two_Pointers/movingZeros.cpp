#include<bits/stdc++.h>
using namespace std;

vector<int> movingZeros(vector<int> nums){
   int i=0;
        int j=0;
        int n = nums.size();
        while(i < n){
            if(nums[i]!= 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
            }
            i++;
        }
    return nums;
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    
    vector<int> res =  movingZeros(nums);
    cout<<"[ ";
    for(int i=0 ; i< res.size(); i++){
        cout<< res[i]<<" ";
    }
    cout<<"]";
}