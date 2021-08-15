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
	string a,b;
	cin>>k>>a>>b;
	a = "0"+a;
	b = "0"+b;
	
	while(a.length() < b.length()) {
		a = "0" + a;
	}
	while(b.length() < a.length()) {
		b = "0" + b;
	}
	//cout<<a <<' '<<b<<endl;
	string res(b.length(), '0');
	int c = 0;
	for (int i = b.length() - 1; i >= 0; i--) {
		int x = b[i] - '0';
		int y = a[i] - '0';
		int kq = x + y + c;
		c = kq/k;
		kq %= k;
		res[i] = kq + '0';
	}
	if (res[0] =='0') res.erase(0, 1);
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





