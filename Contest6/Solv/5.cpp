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
vector<vector<ll> > board;
ll mod = 1e9+7;
vector<vector<ll> > createBoard() {
	vector<vector<ll> > f(1005, vector<ll>(1005, 1));
	for (int i = 1; i < 1005; i++) {
		for (int j = 1; j < i; j++) {
			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
			f[i][j] %= mod;
		}
	}
	return f;
}

void solve(){
	int n, m;
	cin>>n>>m;
	cout<<board[n][m]<<endl;
}
int main(){
	board = createBoard();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





