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
ll base = 1e9+7;
ll Modulo(ll n, ll m) {
	if (m == 0) return 1;
	if (m == 1) return n;
	ll res = Modulo(n, m/2)%base;
	res = res * res % base;
	if (m % 2 == 0) return res % base;
	else return res*n%base;
}

ll dao(ll n) {
	ll s = 0;
	while(n) {
		s = s*10+n%10;
		n/=10;
	}
	return s;
}

void solve(){
	ll n;
	cin>>n;
	ll m = dao(n);

	cout<<Modulo(n,m)%base<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





