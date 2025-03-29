/*
Given an array A[] of N integers and a range(L, R).
The task is to find the number of subarrays having sum in the range L to R (inclusive).
*/ 
#include<bits/stdc++.h>
using namespace std;

long long countSubarray(int N,vector<int> A,long long x) {
    long long ans = 0;
    int sum = 0;
    for(int j=0, i=0; i<N; i++){
        sum += A[i] ;       
        if(sum > x){
            while(sum > x){
                sum -= A[j];
                j++;
            }
        }
        ans += i - j + 1;
    }
    return ans;
}

int main(){
    int N = 4;
    long long L = 4;
    long long R = 13;
    vector<int> A = {2, 3, 5, 8};
    cout<<countSubarray(N,A,R)- countSubarray(N,A,L-1);
}