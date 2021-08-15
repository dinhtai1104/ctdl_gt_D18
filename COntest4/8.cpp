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
	return a.e<b.e;
}

void solve(){
	int n;
	cin>>n;
	Work work[n];
	for (int i =0;i<n;i++) {
		cin>>work[i].s;
	}
	for (int i =0;i<n;i++) {
		cin>>work[i].e;
	}
	sort(work, work + n, comp);
	int res = 0, ending = 0;
//	for (int i =0;i<n;i++) {
//		cout<<work[i].s<<' '<<work[i].e<<endl;
//	}
	res = 1; ending = 0;
	for (int i = 1; i < n; i++) {
		
		if (work[i].s < work[ending].e) continue;
		res++;
		ending = i;
		
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





