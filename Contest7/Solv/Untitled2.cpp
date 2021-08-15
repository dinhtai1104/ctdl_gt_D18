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
#define all(x) x.begin(),x.end()

void awake() {

}

struct KH {
	ll s,e;
};

bool cmp(KH a, KH b) {
	if (a.s < b.s || (a.s==b.s&&a.e < b.e)) return true;
	return false;
}

void FixedUpdate(){	
	int n;
	cin>>n;
	vector<KH>a(n);
	for(int i=0;i<n;i++) {
		ll x;
		cin>>x;
		a[i].s=x;
	}
	for(int i=0;i<n;i++) {
		ll x;
		cin>>x;
		a[i].e=a[i].s+x;
	}
	sort(all(a), cmp);
//	for(int i=0;i<n;i++) {
//		cout<<a[i].s<<' '<<a[i].e<<endl;
//	}
	ll res = 0;
	priority_queue<ll, vector<ll>, greater<ll> >q;
	for (int i=0;i<n;i++) {
		while(!q.empty()&&q.top()<=a[i].s) {
			q.pop();
		}
		q.push(a[i].e);
		ll x = q.size();
		res = max(res, x);
	}
	cout<<res<<endl;
}
int main(){
	awake();
	int t=1;
//	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





