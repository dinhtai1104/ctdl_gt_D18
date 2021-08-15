#include<bits/stdc++.h>
 
using namespace std;
 
vector<string> res;
bool visited[20][20] = {false};
 
int a[20][20];
void Try(int row, int col, int n, string s){
    if (row == n && col == n){
        res.push_back(s);
    }
    else{
        if (row + 1 <= n && a[row+1][col] == 1 && visited[row+1][col] == false){
            visited[row+1][col] = true;
            Try(row+1,col,n,s+"D");
            visited[row+1][col] = false;
        }
        if (col + 1 <= n && a[row][col+1] == 1 && visited[row][col+1] == false){
            visited[row][col+1] = true;
            Try(row,col+1,n,s+"R");
            visited[row][col+1] = false;
        }    
        if (row - 1 >= 1 && a[row-1][col] == 1 && visited[row-1][col] == false){
            visited[row-1][col] = true;
            Try(row-1,col,n,s+"U");
            visited[row-1][col] = false;
       
        }    
        if (col - 1 >= 1 && a[row][col-1] == 1 && visited[row][col-1] == false){
            visited[row][col-1] = true;
            Try(row,col-1,n,s+"L");
            visited[row][col-1] = false;
        }    
    }
}
 
void process(){
    res.clear();
    for(int i=0;i<=20;i++){
        for(int j=0;j<=20;j++){
            a[i][j] = 0;
            visited[i][j] = false;
        }
    }
    visited[1][1] = true;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,1,n,"");
    sort(res.begin(),res.end());
    if (!res.size() || a[1][1] == 0){
        cout << -1 << endl;
        return;
    }
    for(int i=0;i<res.size();i++) cout << res[i] << " ";
    cout << endl;
 
}
 
int main(){
   
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}
