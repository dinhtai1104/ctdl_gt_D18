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

int lower_Bound(int a[],int l,int r,int key) {
	int res=-1;
	while(l<=r) {
		int m=(l+r)>>1;
		if(a[m]<key) {
			res=m;
			l=m+1;
		} else r=m-1;
	}
	return res;
}

void FixedUpdate(){
	int n,k;
	ll cnt=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort_arr(a,n);
//	for(int i=0;i<n;i++)cout<<a[i]<<' ';
//	cout<<'\n';
	for(int i=0;i<n-1;i++) {
//		int x=lower_Bound(a,i+1,n,k+a[i]);
//		int x=upper_bound(a+i+1,a+n,k+a[i]-1)-a;
		int x=lower_Bound(a,i+1,n-1,k+a[i]);
		if (x!=-1)
			cnt+=x-i;
	}
	cout<<cnt<<endl;
	
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





