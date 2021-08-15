#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct SO {
	ll data, solan, stt;
	SO() {
		data=solan=stt=0;
	}
};
bool cmp(SO a, SO b) {
	if (a.solan>b.solan || (a.solan==b.solan && a.stt<b.stt)) return true;
	return false;
}
bool cmp1(SO a, SO b){
	return a.data<b.data;
}
void solve(){
	get(n);
	set_vect(a, n);
	vector<SO> x(n);
	for(ll i=0;i<n;i++) {
		x[i].data=a[i];
		x[i].stt=i;
		x[i].solan=0;
	}
	sort_vect(x.begin(),x.end(),cmp1);
	x[0].solan=1;
	for(ll i=1;i<n;i++) {
		if (x[i].data==x[i-1].data) {
			x[i].solan+=x[i-1].solan+1;
			x[i-1].solan=-1;
			x[i].stt=x[i-1].stt;
		} else x[i].solan=1;
	}
	sort_vect(x.begin(),x.end(),cmp);
	for (ll i=0;i<n;i++) {
		if (x[i].solan != -1) {
			for(ll j=0;j<x[i].solan;j++) {
				cout<<x[i].data<<' ';
			}
		}
	}
	cout<<'\n';
}
void solve2() {
	get(n);
	set_vect(a, n);
	map<ll,ll> x;
	for(int i=0;i<n;i++) {
		x[a[i]]++;
	}
	sort_vect(a);
	multimap<ll,ll,greater<ll> >mu;
	for(int i=0;i<n;i++) {
		mu.insert({a[i],x[a[i]]});
	}
	for(ll i=0;i<n;i++) {
		cout<<mu[i].second<<' ';
	}
	cout<<endl;
}

int main(){
	btSpeed();
	int t=1;
	cin >> t;
	while(t--) {
		solve2();
	}

	return 0;
}





