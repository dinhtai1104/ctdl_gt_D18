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
	vector< vector<ll> > res;
	get(N);
	get(K);
	ll a[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cin>>a[i][j];
		}
	}
	vector<ll> b(N);
	
	for(int i=0;i<N;i++) b[i] = i;
	while(next_permutation(b.begin(), b.end()) != NULL) {
		ll s= 0;
		vector<int> x;
		for (int i = 0; i <N; i++) {
			s += a[i][b[i]];
			x.push_back(b[i]);
		}
		if (s == K) res.push_back(b);
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++) {
		for(int j=0;j<res[i].size(); j++) {
			cout<<res[i][j] + 1<<' ';
		}
		cout<<endl;
	}
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





