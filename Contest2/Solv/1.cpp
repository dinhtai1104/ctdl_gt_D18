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
	getStr(s);
	string res="";
	while(1) {
		int i = s.length()-1;
		while(s[i]=='1') {
			i--;
		}
		if (i < 0) {
			for(int j=0;j<s.length();j++)cout<<0;
			cout<<endl;
			return;
		}
		s[i] = '1';
		for (int j = i + 1; j < s.length(); j++) s[j] = '0';
		cout<<s<<endl;
		return;
	}
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





