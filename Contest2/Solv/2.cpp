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
	get(n);get(k);
	set_arr(a,k);
	while(1) {
		int i = k - 1;
		while(a[i] == n-k+i+1) {
			i--;
		}
		if (i < 0) {
			for(int i=0;i<k;i++) cout<<i+1<<' ';
			cout<<endl;
			return;
		}
		a[i] += 1;
	//	cout<<a[i]<<' ';
		for (int j = i + 1; j < k; j++) {
			a[j] = a[i] + j - i;
			//cout<<a[j]<<' ';
		}
		for(int i = 0; i<k;i++)cout<<a[i]<<' ';
		cout<<endl;
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





