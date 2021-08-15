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

struct Work {
	int s, e;
	Work() {
		s=e=0;
	}
};

bool comp(Work a, Work b) {
	if (a.s < b.s || (a.s == b.s && a.e < b.e)) return true;
	return false;
}

void solve(){
	ll n;
	cin>>n;
	ll work[n];
	priority_queue <ll, vector<ll>, greater<ll> > heap;
	ll res = 0;
	for (int i =0;i<n;i++) {
		cin>>work[i];
		heap.push(work[i]);
	}
	ll base = 1e9+7;
	while(heap.size() > 1) {
		ll first = heap.top();heap.pop();
		ll second = heap.top();heap.pop();
		res+=first+second;
//		res %= base;
		heap.push(first+second);
		
	}
	
	cout<<res<<endl;

	
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





