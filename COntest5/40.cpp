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
ll findPath(ll a[], ll n) {
	ll l = 0, r = n;
	ll res = -1;
	while(l<=r) {
		ll mid=(l+r)>>1;
		if (a[mid]==1) {
			res = mid;
			l = mid + 1;
		} else r = mid-1;
	}
	return res;
}

void solve(){
	get(n);
	set_arr(a, n);
	sort(a, a+n, greater<ll>());
	ll res = findPath(a, n);
	if (res == -1) {
		cout<<n<<endl;
		return;
	}
	cout<<n - res - 1<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





