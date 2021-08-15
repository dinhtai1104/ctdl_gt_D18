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
int a[20], N, k;


void solve(){
	cin>>N>>k;
    string s(N, '0');
    for (int i = s.length() - 1; i >=0; i--) {
    	s[i] = '1';
    	k--;
    	if (k == 0) break;
	}
	cout<<s<<endl;
	while(next_permutation(s.begin(), s.end())!=NULL) {
		cout<<s<<endl;
	}

	//cout<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





