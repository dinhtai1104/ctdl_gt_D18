#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
	get(n);
	set_vect(a,n);
	set_vect(b,n);
	sort_vect(a);
	sort_vect(b);
	for(int i=0;i<n;i++) {
		if (a[i]>b[i]) {
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





