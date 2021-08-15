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
vector<ll>dp(60,0);

void awake() {
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	/*
	111
	12
	21
	3
	*/
	for(int i=4;i<60;i++) {
		dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
	}
}

void solve(){
	int n;
	cin>>n;

	cout<<dp[n]<<endl;
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





