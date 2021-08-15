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
void chuan(string &s) {
	for(int i=0;i<s.length();i++) {
		if(s[i]>='A'&&s[i]<='Z') s[i] += 'a'-'A';
	}
}
void chuan2(string &s) {
	for(int i=0;i<s.length();i++) {
		if(s[i]>='a'&&s[i]<='z') s[i] += 'A'-'a';
	}
}
void solve(){
	getStrs(s);
	chuan(s);
	vector<string> a;
	for(int i=0;i<s.length();i++) {
		string tmp="";
		while(s[i]!=' '&&i<s.length()) {
			tmp += s[i];
			i++;
		}
		if(tmp != "") {
			tmp[0]+='A'-'a';
			a.push_back(tmp);
		}
	}
	for(int i=1;i<a.size()-1;i++) {
		cout<<a[i]<<' ';
	}
	chuan2(a[0]);
	cout<<a[a.size()-1]<<", " <<a[0];
	cout<<'\n';
}
int main(){
	int t=1;
	btSpeed();
	cin >> t; cin.ignore();
	while(t--) {
		solve();
	}

	return 0;
}





