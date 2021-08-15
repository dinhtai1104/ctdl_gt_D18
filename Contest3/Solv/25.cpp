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

ll n, k;
vector< vector<int> > res;
bool OK = false;
int a[101], arr[101];

bool check(int i, int sum) {
	if (sum == 0) return true;
	if (i == n || sum < 0) return false;
	if (check(i + 1, sum - arr[i])) return true;
	int j = i + 1;
	while(j < n && arr[i]==arr[j]) {
		j++;
	}
	return check(j, sum);
}

void solve(){
	cin>>n;
	ll sum = 0;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		sum += arr[i];
	}
	if (sum % 2 != 0) cout<<"NO\n";
	else {
		sum /= 2;
		if (check(0, sum)) {
			cout<<"YES\n";
		} else cout<<"NO\n";
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





