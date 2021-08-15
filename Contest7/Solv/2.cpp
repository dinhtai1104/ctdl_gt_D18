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

int k;
bool cmp(int x, int y) {
	return abs(x-k)<abs(y-k);
}

void FixedUpdate(){
	int n;
	cin>>n>>k;
	set_vect(a,n);
	stable_sort(all(a), cmp);
	for(int i=0;i<n;i++)cout<<a[i]<<' ';
	cout<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





