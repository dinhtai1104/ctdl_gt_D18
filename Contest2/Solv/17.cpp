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
	int c;
	cin>>c;
	int N=25;
	string s(N, '0');
	while(1) {
		int i = N-1;
		while(s[i]=='9') {
			i--;
		}
		if (i < 0) {
			break;
		}
		s[i] = '9';
		for (int j = i + 1; j < N; j++) s[j] = '0';
		int x=0;
		for(int j = 0; j < N;j++) {
			x = (x * 10 + (s[j] -'0'))%c;
		}
		if (x == 0) {
			int t=0;
			while(s[t] == '0')  t++;
			cout<<s.substr(t, N)<<endl;
			return;
		}
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





