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
	int n,m;
	cin>>n>>m;
	int a[n + 5][m + 5];
	vector<vector<int> > f(n+5, vector<int>(m+5,1));
	for (int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin>>a[i][j];
		}
	}
	int res = 0;
	for (int i=2;i<=n;i++) {
		for(int j=2;j<=m;j++) {
			if (a[i][j]&&a[i][j]==a[i-1][j-1]&&a[i][j]==a[i-1][j]&&a[i][j]==a[i][j-1]) {
				f[i][j] = min(f[i][j-1], min(f[i-1][j-1],f[i-1][j])) + 1;
			}
			res = max(f[i][j], res);
		}
	}
	cout<<res<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





