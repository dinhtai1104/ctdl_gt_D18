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

vector<int>nums(10,0);

void awake() {

}

void setDigitsOfNumber(ll num) {
	while(num) {
		nums[num%10]++;
		num/=10;
	}
}

void FixedUpdate(){
	for(int i=0;i<10;i++)nums[i]=0;
	int n;
	cin>>n;
	for(ll i=0,x;i<n;i++) {
		cin>>x;
		setDigitsOfNumber(x);
	}
	for(int i=0;i<=9;i++) {
		if(nums[i]) cout<<i<<' ';
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




