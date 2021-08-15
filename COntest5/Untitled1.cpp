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
ll res = 0;
struct VK{
	ll d, i;
};
void callBacks(vector<ll> cur, vector<VK> data, ll target, ll cnt, int index) {
	if (target <= 0) {
		if (target == 0) {
			res = cnt;
		}
		return;
	}
	if (index < data.size()) {
		ll value = data[index].d;
		cur.push_back(value);
		callBacks(cur, data, target%value+target/value*data[index].i, cnt + target/value, index);
		cur.pop_back();
		callBacks(cur, data, target, cnt, index + 1);
	}
}


bool cmp(VK a, VK b) {
	return (a.d > b.d || (a.d == b.d && a.i > b.i));
}
void solve(){
	int a; ll b;
	cin>>a>>b;
	vector<VK>vk(a);
	for(int i=0;i<a;i++)cin>>vk[i].d>>vk[i].i;
	sort(vk.begin(),vk.end(),cmp);
	callBacks(vector<ll>(0,0), vk, b, 0, 0);
	for (int i=0;i<a;i++)cout<<vk[i].d<<' '<<vk[i].i<<endl;
//	for (int i=0;i<a;i++) {
//		
//	}
	cout<<res<<endl;
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





