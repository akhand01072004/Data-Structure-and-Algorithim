#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<=4; i++){
        for(int j=5; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i+(i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=5; i>=1; i--){
        for(int j=5; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i+(i-1); k++){
            cout<<"*";
        }
        cout<<endl;
    }
}