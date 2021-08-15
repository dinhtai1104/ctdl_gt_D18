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
	ll n,m;
	cin>>n;
	ll a[n],b[n];
	map<ll,ll>ac;
	for (int i=0;i<n;i++){
		cin>>a[i];
		ac[a[i]] = 1;
	}
	for(int i=0,x;i<n-1;i++){
		cin>>b[i];
	
	}
	for(int i=0,x;i<n-1;i++){
	//	cin>>b[i];
		if (b[i] != a[i]) {
			cout<<i+1<<endl;
			return;
		}
	}
	cout<<n<<endl;

}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





