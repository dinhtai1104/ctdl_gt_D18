#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool check1(string s) {
	for(int i=1;i<s.length();i++){
		if(s[i]>s[i-1]) return false;
	}
	return true;
}
bool check2(string s) {
	for(int i=1;i<s.length();i++){
		if(s[i]<s[i-1]) return false;
	}
	return true;
}
void solve(){
	getStr(s);
	if (check1(s)||check2(s)) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





