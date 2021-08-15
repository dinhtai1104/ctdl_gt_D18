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
	int n;
	cin>>n;
	int key;
	cin>>key;
	set_arr(a,n);
	
	int l =0, r=n;
	while(l <= r) {
		int mid = (l+r)>>1;
		if (a[mid]==key) {
			cout<<mid+1<<endl;
			return;
		} else if (a[mid] > key) {
			r = mid - 1;
		} else l = mid + 1;
	}
	cout<<"NO"<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





