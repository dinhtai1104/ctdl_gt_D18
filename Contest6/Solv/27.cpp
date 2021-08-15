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
	vector<vector<int> >f(1010,vector<int>(1010, 0));
	int n,x;
	cin>>n>>x;
	int a[n+5],v[n+5];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=n;j++) cin>>v[j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=x;j++){
			if (a[i]<=j)
				f[i][j]=max(f[i-1][j], f[i-1][j-a[i]]+v[i]);
			else f[i][j]=f[i-1][j];
		}
	}
	cout<<f[n][x]<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





