#include<bits/stdc++.h>
 
using namespace std;
 
vector<string> res;
 
 
int a[20][20];
 
void Try(int row, int col, int n, string s){
    if (row == n && col == n){
        res.push_back(s);
        cout<<s<<endl;
    }
    else{
        if (row + 1 <= n && a[row+1][col] == 1) Try(row+1,col,n,s+"D");
        if (col + 1 <= n && a[row][col+1] == 1) Try(row,col+1,n,s+"R");    
    }
}
 
void process(){
    res.clear();
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){
            a[i][j] = 0;
        }
    }
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1,n,"");
    if (!res.size()){
        cout << -1 << endl;
        return;
    }
//    sort(res.begin(),res.end());
//    for(int i=0;i<res.size();i++) cout << res[i] << " ";
//    cout << endl;
 
}
 
int main(){
   
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}
