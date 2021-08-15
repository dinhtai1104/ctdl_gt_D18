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
int f[10005];

void awake() {

	f[0] = 0;
	f[1] = 1;
	f[2] = 2;
	f[3] = 3;
	for(int i=4; i<=10000; i++){
		f[i] = i;
		for(int j=1; j<=ceil(sqrt(i)); j++){
			int x = j*j;
			if(x > i) break;
			else f[i] = min(f[i], f[i-x]+1);
		}
	}
}

void solve(){
	int n;
	cin>>n;
	cout<<f[n]<<endl;
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





