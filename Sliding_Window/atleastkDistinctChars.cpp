#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string &s, int k) {
        // your code here
        int n = s.size();
        int count = 0;
        
        unordered_map<char,int> freq;
        int j = 0;
        for(int i=0; i<n; i++){
            freq[s[i]]++;
            
            while(freq.size() >= k){
                count += n - i;
                freq[s[j]]--;
            if (freq[s[j]] == 0) {
                freq.erase(s[j]);
            }
            j++;
            }
        }
        return count;
}


int main() {
    // Write C++ code here
    string  s = "abcca";
    int k = 3;
    cout<<longestKSubstr(s,k);
}