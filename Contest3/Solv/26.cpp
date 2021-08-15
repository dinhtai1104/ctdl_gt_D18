#include<bits/stdc++.h>
 
using namespace std;
 
string res;
 
void Try(string s , int k){
    if (k == 0) return;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if (s[i] < s[j]){
                swap(s[i],s[j]);
                res = max(res, s);
                Try(s,k-1);
                swap(s[i],s[j]);
            }
        }
    }
 
}
 
void process(){
    string s;
    int k;
    cin >>k;
    cin >> s;
    res = s;
    Try(s, k);
    cout << res << endl;
}
 
int main(){
 
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}
