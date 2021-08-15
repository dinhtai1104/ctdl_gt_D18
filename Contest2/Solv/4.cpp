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
int a[20], N;

void DQ(int i) {
	for (int j = 0;j <= 1;j++) {
		a[i] = j;
		if (i == N - 1) {
			for (int k =0; k < N;k++) {
				if(a[k]==0)cout<<'A';
				else cout<<"B";
			}
			cout<<' ';
		}
		else DQ(i+1);
	}
}
void solve(){
	cin>>N;

	DQ(0);
	cout<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





