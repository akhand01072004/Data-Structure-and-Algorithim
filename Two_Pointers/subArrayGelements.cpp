/*
Google SDE Interview. :-> Given an array of numbers ;
 find the longest subarray which has number g1 coming for <=k1 times. 
 (-->k1 or k1-1 or k1-2 or k1-3 or….1 or 0) + g2 coming for <=k2 times. + g3 coming for <=k3 times. 

*/
#include<bits/stdc++.h>
using namespace std;

int subArrayGelements(vector<int>& nums, int k1, int g1, int k2, int g2, int k3, int g3 ){
    int n = nums.size();
    int max_len = 0;
    int k = k1+k2+k3;
    int c1 =0, c2=0,c3=0;
    int i=0,j=0;
    while(j<n){
        if(nums[j] == g1 ){
            c1++;
        }
        if( nums[j]==g3){
            c3++;
        }
        if(nums[j]==g2){
            c2++;
        }
        while(c1 > k1 || c2 > k2 || c3 > k3){
            if(nums[i] == g1) c1--;
            if(nums[i] == g2) c2--;
            if(nums[i] == g3) c3--;
            i++;
        }
        max_len = max(max_len,(j-i+1));
        j++;
    }
    return max_len;

        
}

int main(){
    vector<int> arr = {4, 5, 6, 7, 4, 5, 6, 7, 4, 5, 6};
    int g1 = 4, k1 = 1;
    int g2 = 5, k2 = 1;
    int g3 = 6, k3 = 1;  
    cout<<subArrayGelements(arr, k1, g1 , k2, g2, k3,g3);
}

/*
just to remind if in the question is given that all are distict value g1 g2 g3 a, 
then we add simply all of them k = k1 + k2 + k3

*/