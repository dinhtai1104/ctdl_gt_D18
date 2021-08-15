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
ll dp[30][30];

void solve(){
	int n,m;
	cin>>n>>m;
	cout<<dp[n][m]<<endl;	
}
int main(){
	int t=1;
	cin >> t;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<30;i++)dp[0][i]=dp[i][0]=1;
	dp[0][0]=0;
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(i==0||j==0)continue;
			dp[i][j] = dp[i][j-1]+dp[i-1][j];
		}
	}
//	cout<<dp[n][m]<<endl;
	while(t--) {
		solve();
	}

	return 0;
}





