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
	queue<int>q2,q3,q5;
	ll _min = 1;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++) {
		q2.push(_min*2);
		q3.push(_min*3);
		q5.push(_min*5);
		_min = min(q2.front(), min(q3.front(), q5.front()));
		if (_min == q2.front()) q2.pop();
		if (_min == q3.front()) q3.pop();
		if (_min == q5.front()) q5.pop();
	}
	cout<<_min<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





