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
	int k;
	cin>>k;
	string s;
	cin>>s;
	int d[26]={};
	for (int i=0;i<s.length();i++) {
		d[s[i]-'A']++;
	}
	
	priority_queue<int, vector<int>, less<int> > ac;
	for (int i=0;i<26;i++){
		if (d[i])
			ac.push(d[i]);
	}
	while(k) {
		if (k == 0) break;
		int t = ac.top();ac.pop();
		t--;
		ac.push(t);
		k--;
	}
	ll res = 0;
	while(!ac.empty()) {
		int t = ac.top();ac.pop();
		res += t*t;
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





