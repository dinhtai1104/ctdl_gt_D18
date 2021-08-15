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

vector<vector<ll>> dp(101, vector<ll>(50001, 0));
ll mod = 1e9+7;

void awake() {
	/*
		dp[0][j]=0;
		dp[i][0]=0;
		dp[1][j]=1;
		
		=> dp[i][j] += dp[i-1][j-x]
		dp[i-1][j-x] : x=0->9
	*/
	for(int i=1;i<=9;i++)dp[1][i]=1;
	for (int i=1;i<101;i++){
		for(int so=0;so<=9;so++){
			for(int j=so;j<50001;j++){
				dp[i][j]=(dp[i][j]+dp[i-1][j-so])%mod;
			}
		}
	}
}

void solve(){
	int n,k;
	cin>>n>>k;
	cout<<dp[n][k]<<endl;
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





