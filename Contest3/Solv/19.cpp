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
int n, m;


/*
	voi mang n phan tu
	thuc hien moi buoc a[i] + a[i + 1]=> n-1;
	
	

*/
int k;
//void Try(int i) { // tai hang i;
//	a[i] = a[m-n] + a[m-n+1];
//	cout << a[i] << ' ';
//	if (i == n - 1) {
//		n--;
//	}
//	if (n < 0) return;
//	
//	Try(i + 1);
//}

void solve(){
	cin>>n;
	m = n;
	vector<int>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<"[";
	for(int i=0;i<n;i++) {
		cout<<a[i];
		if(i<n - 1)cout<<' ';
	}
	cout<<"]\n";
	for (int i = n - 1; i >0; i--) {
		cout<<"[";
		vector<int>b;
		for (int j = 0; j < i;j++) {
			cout<<a[j]+a[j+1];
			b.push_back(a[j]+a[j+1]);
			if (j < i - 1) cout<<' ';
		}
		a = b;
		cout<<"]\n";
	}
	
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





