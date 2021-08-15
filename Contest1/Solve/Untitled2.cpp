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
int dp[5000][5000];

int main() {

	int t;
	cin>>t;
	while(t--) {
	    int n;
	    for(int i=0;i<5000;i++) {
	    	for(int j=0;j<5000;j++) dp[i][j]=0;
		}
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	
	    for(int len = 1; len <= n; len++)
	        for(int l = 0; l < n - len + 1; l++) {
	            int r = l + len - 1;
	            if (len == 1) { dp[l][r] = 1; continue; }
	            if (len == 2) { dp[l][r] = 1 + (a[l] == a[r]); continue; }
	
	            dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
	            if (a[l] == a[r]) dp[l][r] = max(dp[l][r], 2 + dp[l+1][r-1]);
	        }
    	if(dp[0][n-1] >= 3) cout<<"YES\n";
    	else cout<<"NO\n";
	}

	
    return 0;
}




