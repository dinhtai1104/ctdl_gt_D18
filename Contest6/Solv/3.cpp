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
	int n,s;
	cin>>n>>s;
	vector<int>f((ll)4e4, 0);
	int a[n + 1];
	f[s] = 0; f[0]= 1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<=n;i++){
		for(int t = s; t >= a[i]; t--) {
			if (f[t]==0&&f[t-a[i]]==1) f[t]=1;
		}
	}
	if (f[s]) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





