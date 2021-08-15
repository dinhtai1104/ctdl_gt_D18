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
	/*
		Using LIS(Longest Increase Subquence):
		Get Increase Sum until current - Decrease Sum until current + a[current]
		We will get Largest Sum Of Bitonic;
	
	*/
	
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	vector<ll>inc(a,a+n), dec(a,a+n), sum(n, 0);
	for(int i=1;i<n;i++){
		for (int j=0;j<i;j++){
			if(a[j]<a[i]){
				inc[i] = max(inc[j]+a[i],inc[i]);
			}
		}
	}
	dec[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		for(int j=n-1;j>i;j--) {
			if(a[j]<a[i]) 
				dec[i]=max(dec[j]+a[i],dec[i]);
		}
	}
	ll res=0;

	for(int i=0;i<n;i++){
		res=max(res, dec[i]+inc[i]-a[i]);
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





