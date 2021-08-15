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
ll y;
int binaryS_low(ll a[], ll l, ll r, ll k) {
	int res = -1;
	while(l <= r) {
		int mid = (l+r)>>1;
		if (a[mid] - k >= y) {
			k = a[mid];
			res = mid;
			r = mid-1;
		} else if (a[mid] < k) l = mid+1; else r = mid-1;
	}
	return res;
}
int binaryS_up(ll a[], ll l, ll r, ll k) {
	int res = -1;
	while(l <= r) {
		int mid = (l+r)>>1;
		if (a[mid] - k <= y) {
			k = a[mid];
			res = mid;
			l = mid+1;
		}  else if (a[mid] < k) l = mid+1; else r = mid-1;
	}
	return res;
}
int binaryS(ll a[], ll l, ll r, ll k) {
	while(l <= r) {
		int mid = (l+r)>>1;
		if (a[mid] == k) {
			return mid;
		}  else if (a[mid] < k) l = mid+1; else r = mid-1;
	}
	return -1;
}
void solve(){
	get(n);
	get(k);
	cin>>y;
	set_arr(a,n);
	sort_arr(a,n);
	ll index = binaryS(a, 0, n,k);
	ll value = k;
	cout<<index<<endl;
	for (int i=0;i<n;i++) cout<<a[i]<<' ';
	cout<<endl;
	while(true) {
		ll tmp = binaryS_up(a, index + 1, n, value);
		if (tmp ==-1) break;
		cout<<tmp << ' ' << a[tmp] <<endl;
		index=tmp;
		value = a[tmp];
	}
	cout<<"endl1"<<endl;
	ll res = index;
	index = binaryS(a, 0, n,k);
	value = k;
	cout<<value<<endl;
	while(true) {
		ll tmp = binaryS_low(a, 0, index - 1, value);
		if (tmp ==-1) break;
		cout<<tmp << ' ' << a[tmp] <<endl;
		index=tmp;
		value = a[tmp];
	}
	cout<<res - index + 1<<endl;
	
	
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





