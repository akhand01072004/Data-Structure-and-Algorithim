#include<bits/stdc++.h>
using namespace std;

void print14(int n){
    int ch = 65;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<char(ch);
        }
        ch += 1;
        cout<<endl;
    }
}

int main(){
    int n = 5;
    print14(n);
}