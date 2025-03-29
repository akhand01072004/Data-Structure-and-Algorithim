#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxBuildingsUnderK(vector<int>& nums, int k) {
    int n = nums.size();
    int maxBuildings = 0;
    int bestAngle = nums[0];  // Initialize with first building angle
    int j = 0;  // Left pointer

    for (int i = 0; i < n; i++) {
        while (nums[i] - nums[j] > k) {
            j++;  // Shrink window from the left
        }

        int count = i - j + 1;  // Buildings in the current field of view
        if (count > maxBuildings) {
            maxBuildings = count;
            bestAngle = nums[j];  // Start angle of the window
        }
    }

    return {bestAngle, maxBuildings};
}

int main() {
    vector<int> nums = {5, 9, 20, 22, 28, 35, 60, 350, 358, 359, 360};
    int k = 30;
    pair<int, int> result = maxBuildingsUnderK(nums, k);
    
    cout << "Best angle: " << result.first << endl;
    cout << "Max buildings: " << result.second << endl;
    
    return 0;
}
/*
follow up question: find number of subarray whose sum < k

#include<bits/stdc++.h>
using namespace std;

int numberofSubArray(vector<int> nums, int k){
    int n = nums.size();
    int count = 0;
    int j = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
       sum += nums[i];
       while(sum >= k){
        sum -= nums[j];
        j++;
       }

       count += (i-j+1);
    }
    return count;
}
int main(){
    vector<int> nums  = {1, 11, 2, 3, 15};
    int k = 10;
    cout<<numberofSubArray(nums,k);
}


*/