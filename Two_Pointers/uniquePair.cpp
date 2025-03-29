/*
Expedia OA
Understanding :- Given two arrays “a” and “b” ; find the unique pairs such that element in a is bigger than element in b 

Unique pair meaning :- (i,j) once selected this particular set of index cannot be used again. Index should not be repeated. 

*/
#include<bits/stdc++.h>
using namespace std;

int uniquePair(vector<int>& a, vector<int>& b,int n) {
    int count = 0;
    sort(a.begin()+1, a.end());
    sort(b.begin()+1, b.end());
    int i=1; 
    int j=1;
    while(i <= n && j <= n){
        if(a[i] > b[j] ){
            count++;
            i++;
            j++;
        }
        i++;
    }
    return count;

        
}

int main(){
    vector<int> a = {1, 2, 3};
    vector<int> b = {1,2,1};
    int n = 3;
    
    cout<<uniquePair(a,b,n);
}