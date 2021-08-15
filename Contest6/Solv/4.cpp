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
 	int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
        a[i] %= m;
    }

    vector<int> f(m, INT_MIN), g(m);
    f[0] = 0;
    for (int j=0;j<n;j++) {
        for (int i=0; i<m; i++) {
            g[i] = max(f[i], f[(i-a[j]+m) % m] + 1);
        }
        f.swap(g);
    }

    cout << f[0] << endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





