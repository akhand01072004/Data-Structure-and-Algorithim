#include<bits/stdc++.h>
using namespace std;

pair<int,int> Sum2(vector<int> nums, int target){
    int n = nums.size();
   
    for(int i=0; i<n; i++){
    }

    if(n <= 1){
        return {-1,-1};
    }
    int f=-1;
    int s=-1;
    
    int i=n-1;
    for(int j=0; j<n; j++){
        
    }
    return {f,s};


}
int main(){
    vector<int> nums = {2,7,11,15};
    int t = 9;
    pair<int,int> res =  Sum2(nums,t);
    cout<<"{ "<<res.first<<" , "<<res.second<<"}"
}