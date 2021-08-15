#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[105][105][105];
int tinh(string s1, string s2, string s3, int n, int m, int p) {
	memset(dp, 0, sizeof(dp));
	s1=" "+s1;
	s2=" "+s2;
	s3=" "+s3;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++){
			for(int k=1;k<=p;k++){
				if (s1[i]==s2[j]&&s2[j]==s3[k]){
					dp[i][j][k] = dp[i-1][j-1][k-1]+1;
				} else {
					dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
				}
			}
		}
	}
	return dp[n][m][p];
}
void solve(){
	string s1,s2,s3;
	int n,m,p;
	cin>>n>>m>>p;
	cin>>s1>>s2>>s3;
	cout<<tinh(s1,s2,s3,n,m,p)<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





