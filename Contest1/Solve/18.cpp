#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


/*
 A.....B....A....B =>giao nhau

*/
void solve(){
	getStrs(s);
	int first[500]={},second[500]={}, check[500]={};
	for(int i=0;i<s.length();i++) {
		if (check[s[i]]==0) {
			first[s[i]]=i;
			check[s[i]]=1;
		} else {
			second[s[i]]=i;
		}
	}
	ll cnt=0;
	for(int i=65;i<=90;i++) {
		for(int j=65;j<=90;j++) {
			if(first[i]<first[j]&&first[j]<second[i]&&second[i]<second[j]) {
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
int main(){
	int t=1;
//	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





