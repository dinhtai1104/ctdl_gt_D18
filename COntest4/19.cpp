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

void Egyptian (ll tu, ll mau) {
	if (mau % tu == 0) {
		mau /= tu;
		tu = 1;
		cout << 1<<'/'<<mau;
		return;
	}
	int x = (mau)/tu + 1;
	cout << 1 <<'/' << x;
	//if (tu == 1) return;
	cout << " + ";
	Egyptian((x)*tu-mau,(x)*mau);
}

void solve(){
	ll a, b;
	cin>>a>>b;
	Egyptian(a, b);
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





