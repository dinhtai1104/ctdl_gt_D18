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
vector<int>d(32,0);
int n;
bool ok = true;
void sinh(int k) {
	int i=k;
	while(i > 0 && d[i] == n-k+i) {
		i--;
	}
	if (i < 1) {
		ok = false;
		return;
	}
	d[i]++;
	for (int j = i + 1; j <= k; j++) {
		d[j] = d[j - 1] + 1;
	}
	
}

void solve(){
	ll s;
	cin>>n>>s;
	vector<ll>a(n+2);
	for (int i=1;i<=n;i++)cin>>a[i];
	for (int i=1;i<=n;i++) {
		ok = true;
		for (int j=1;j<=i;j++){
			d[j]=j;
		}
		while(ok) {
			ll stmp = 0;
			for (int j=1;j<=i;j++) {
				stmp += a[d[j]];
			}
			if (stmp == s) {
				cout << i << endl;
				return;
			}
			sinh(i);
		}
	}
	cout<<-1<<endl;
	
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





