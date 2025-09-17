#include<bits/stdc++.h>
using namespace std;

void print14(int n){
    for(int i=0; i<n; i++){
        int ch = 65;
        for(int j=0; j<=i; j++){
            cout<<char(ch+j);
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    print14(n);
}