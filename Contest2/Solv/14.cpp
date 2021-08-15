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
	int n,k;
	cin>>n>>k;
	int a[k], b[k], c[100]={};
	for(int i =0;i<k;i++) {
		cin>>a[i];
		b[i] = a[i];
		c[a[i]]++;
	}
	while(1) {
		int i = k - 1;
		while(b[i] == n - k + i + 1) i--;
		if (i < 0) {
			cout<<k <<endl;
			return;
		}
		b[i] += 1;
		
		for (int j = i + 1 ; j < k; j++) {
			b[j] = b[i] + j - i;
		}
		break;
	}
	int cnt=0;
	
	for (int i=0;i<k;i++) {
		//cout<<b[i]<<' ';
		if (c[b[i]] == 0) {
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





