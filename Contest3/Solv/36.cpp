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
ll a[20], n, A,B,C,D,E, arr[10], dem[10];
bool ok;

ll calculate(int i, int x, int y) {
	if (a[i] == 0) return x+y;
	if (a[i] == 1) return x-y;
	if (a[i] == 2) return (ll)x*y;
}

bool check() {
	ll AB=calculate(0, arr[dem[0]],arr[dem[1]]);
	ll ABC= calculate(1, AB, arr[dem[2]]);
	ll ABCD = calculate(2, ABC, arr[dem[3]]);	
	ll ABCDE = calculate(3, ABCD, arr[dem[4]]);
	if (ABCDE == 23) return true;
	return false;
}

void Sinh() {
	
}

void Try(int i) {
	for (int j=0;j<3;j++){
		a[i]=j;
		if(i == 3) {
			for(int k=0;k<5;k++)dem[k]=k;
			if (check()) {
				ok = false;
				return;
			}
			while(next_permutation(dem, dem+5) != NULL) {
				if (check()) {
					ok = false;
					return;
				}
			}
		} else Try(i + 1);
	}
}



void solve(){
	ok = true;
	for(int i=0;i<5;i++)cin>>arr[i];
	Try(0);
	if (!ok) cout<<"YES\n";
	else cout<<"NO\n";
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





