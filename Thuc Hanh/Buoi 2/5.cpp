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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
ll Pow(int x, int y) { // x^y
	ll s = 1;
	for (int i=1;i<=y;i++){
		s*=x;
	}
	return s;
}

ll Pow(ll x, ll y, ll m) {
	if (y == 0) return 1;
	if (y == 1) return x%m;
	ll tmp = Pow(x, y/2,m)%m;
	tmp = tmp * tmp;
	if (y%2==0)return tmp;
	else return x*tmp;
}

void FixedUpdate(){
	string s;
	cin>>s;
	ll k,b,m;
	cin>>k>>b>>m;
	ll res = 0;
	ll sum=0, reme=k-1;
	int i=0;
	for (i;i<k;i++) {
		sum=sum+(s[i]-'0')*Pow(b,reme,m);
		reme--;
	}
//	cout<<sum<<' ';
	res += sum % m;
	ll preSum = sum;
	sum=0;
	reme=0;
//	count=0;
	// xxx| yyy| yyy
	//   k  k+1 k+2 k+3
	//  
	for (i;i<s.size();i++) {
		sum = preSum - ((s[i-k]-'0')*Pow(b,k-1,m));
		sum = sum * b;
		sum = sum + (s[i]-'0');
		res += sum % m;
//		cout<<sum<<' ';

		preSum = sum;
//		reme++;;
	}
	cout<<res<<'\n';
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





