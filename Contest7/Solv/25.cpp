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

void FixedUpdate(){
	int n;
	cin>>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	ll _max=99999999,_min=99999999;
	for(int i=0;i<n;i++) {
		_max=min(_max,a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=_max){
			_min=min(_min,a[i]);
		}
	}
	if(_min==99999999) {
		cout<<-1;
	} else {
		cout<<_max<<' '<<_min;
	}
	cout<<endl;
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





