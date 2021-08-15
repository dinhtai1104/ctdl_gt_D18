#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
struct SO {
	ll data, solan, stt;
	SO() {
		data=solan=stt=0;
	}
};
bool cmp(SO a, SO b) {
	if (a.solan>b.solan || (a.solan==b.solan && a.stt<b.stt)) return true;
	return false;
}
bool cmptmp(SO a, SO b) {
	return a.data<b.data;
}
bool check(ll x) {
	while(x) {
		int m=x%10;
		if(m == 2||m==3||m==5||m==7) {
			x/=10;
		} else return false;
	}
	return true;
}
void solve(){
	ll x,t=0;
	vector<ll>xml;
	map<ll,ll>xm;
	while(!cin.eof()) {
		t++;
		cin>>x;
		if (check(x)) {
			if (xm[x]==0) {
				xml.push_back(x);
				xm[x]++;
			} else xm[x]++;
			
		}
		//if (cin.eof()) break;
	}
	for(int i=0;i<xml.size();i++) {
		cout<<xml[i] <<' '<<xm[xml[i]]<<endl;
	}
	
}


int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}
	
	return 0;
}





