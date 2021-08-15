#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
	ll a,b,c;
	scanf("%lld + %lld = %lld", &a,&b,&c);
	if (a+b==c) cout<<"YES";
	else cout<<"NO";
	cout<<"\n";
}
int main(){
	int t=1;
//	cin >> t; cin.ignore();
	while(t--) {
		solve();
	}

	return 0;
}





