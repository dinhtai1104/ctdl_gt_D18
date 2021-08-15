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
	int n,k;
	cin>>k>>n;
	int a[n+2];
	bool dp[k + 100]={false};
	dp[0]=true;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=k;j>=a[i];j--){
			dp[j]=dp[j]||dp[j-a[i]];
		}
	}
	for(int i=k;i>=0;i--){
		if(dp[i]){
			cout<<i<<endl;
			return;
		}
	}
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





