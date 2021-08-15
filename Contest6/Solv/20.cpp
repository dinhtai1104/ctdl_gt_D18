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
ll chuyen(string s) {
	ll st = 0;
	for(int i=0;i<s.length();i++) st = st*10+(s[i]-'0');
	return st;
}
void solve(){
	string s;
	cin>>s;
	int len = s.size();
	ll res = 0;
	for (int i=0;i<len;i++) {
		for(int j=i;j<len;j++) {
			string tmp="";
			for(int l=i;l<=j;l++) tmp += s[l];
			res += chuyen(tmp);
			//cout<<tmp<<endl;
		}
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





