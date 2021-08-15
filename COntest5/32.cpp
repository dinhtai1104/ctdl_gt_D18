#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Fenwick {
	ll n;
	vector<ll>f;
	public:
		Fenwich() {
			
		}
		Fenwick(ll n): n(n), f(n+1, 0) {}
		
		void set(ll i) {
			for(; i >= 1; i -= (i&(-i))) f[i]++;
		}
		
		ll get(ll i) {
			ll res=0;
			for(; i <= n; i += (i &(-i))) res+=f[i];
			return res;
		}
};

void solve(){
	ll n;
	cin>>n;
	Fenwick f((ll)1e7);
	ll res = 0;
	while(n--) {
		ll x;
		cin>>x;
		res += f.get(x + 1);
		f.set(x);
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





