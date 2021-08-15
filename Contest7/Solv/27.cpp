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

vector<int>a;

void print() {
	for(int i=0;i<a.size();i++) {
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

void FixedUpdate(){
	int n;
	cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n-1;i++) {
		int _min=a[i], vt=i;
		for (int j=vt+1;j<n;j++) {
			if(a[j]<_min) {
				_min=a[j];
				vt=j;
			}
		}
		if (vt!=i) swap(a[i],a[vt]);
		cout<<"Buoc "<<i+1<<": ";
		print();
	}
}
int main(){
	awake();
	int t=1;
//	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





