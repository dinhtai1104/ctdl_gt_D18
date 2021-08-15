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
	int n, res = 1;
	cin>>n;
	set_arr(a,n);
	vector<int>f(n, 0);
	for(int i = 0; i < n; i++) {
		f[i] = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i]) {
				f[i] = max(f[i], f[j] + 1);
			}
		}
		res = max(res, f[i]);
	}
	cout<<res + 1<<endl;
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





