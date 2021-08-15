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
int a[20], res, n;
bool check(int x, int y) {
	 for(int i = 1; i < x ;i++)
        if(a[i] == y || abs(i-x) == abs(a[i] - y))
            return false;
    return true;
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (check(i, j)) {
			a[i] = j;
			if (i == n) {
				res++;
			} else Try(i+ 1);
		}
	}
}

void solve(){
	res = 0;
	cin>>n;
	Try(1);
	cout<<res<<"\n";
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





