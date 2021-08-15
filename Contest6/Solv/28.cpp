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
	string a, b;
	cin>>a>>b;
	int n=a.size(), m=b.size();
	a = " " + a;
	b = " " + b;
	int f[n+1][m+1];
	for(int i=0; i<=n; i++)
		f[i][0]=i;
	for(int j=0; j<=m; j++)
		f[0][j]=j;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			if(a[i]==b[j]){
				f[i][j] = f[i-1][j-1];
			}
			else{
				f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1])) + 1;
			}
	cout<<f[n][m]<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





