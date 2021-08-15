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
	ll mod = 1e9+7;
	int n,k;
	cin>>n>>k;
	int a[n];
	ll dp[k+100] = {};
	for (int i=0;i<n;i++) cin>>a[i];
	dp[0]=1;
	for (int i=1;i<=k;i++){
		for(int j=0;j<n;j++){
			if(i>=a[j]) {
				dp[i]=(dp[i]+dp[i-a[j]])%mod;
			}
		}
	}
	cout<<dp[k]<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





