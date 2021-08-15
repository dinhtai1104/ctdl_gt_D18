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
void solve(){
	int n,ins,remo,copy;
	cin>>n>>ins>>remo>>copy;
	ll dp[105]={};
	dp[1]=ins;
	for(int i=2;i<=n;i++) {
		if (i%2==1) {
			dp[i]=min(dp[i-1]+ins,dp[(i+1)/2]+copy+remo);
		} else {
			dp[i]=min(dp[i-1]+ins, dp[i/2]+copy);
		}
	}
	cout<<dp[n]<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





