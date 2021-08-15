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
	get(n);
	set_arr(a,n);
	set_arr(b,n);
	vector<ll> namCao,namThap, nuCao, nuThap;
	for (int i=0;i<n;i++) {
		if (a[i] < 0) {
			namThap.push_back(-a[i]);
		} else namCao.push_back(a[i]);
		if (b[i] < 0) {
			nuThap.push_back(-b[i]);
		} else nuCao.push_back(b[i]);
	}
	sort_vect(namThap);
	sort_vect(namCao);
	sort_vect(nuThap);
	sort_vect(nuCao);
	/*
		namThap + nuCao
		namCao + nuThap
	*/
	ll countPair = 0;
	int i = 0, j = 0;
	while(i < namThap.size() && j < nuCao.size()) {
		if (namThap[i] > nuCao[j]) {
			countPair++;
			i++;
			j++;
		} else{
			i++;
		}
	}
	i = j = 0;
	while(i < namCao.size() && j < nuThap.size()) {
		if (namCao[i] < nuThap[j]) {
			countPair++;
			i++;
			j++;
		} else{
			j++;
		}
	}
	cout<<countPair;
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





