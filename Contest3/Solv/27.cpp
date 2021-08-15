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
bool choosed[30]; // false
int arr[30], n, k;


bool Partition(int index, int k, int sumCurr, int target) {
	if (k == 1) {
		return true;
	} 
	if (sumCurr==target) {
		return Partition(0, k - 1, 0, target);
	}
	
	for (int i = index+1;i<n;i++) {
		if (!choosed[i]) {
			choosed[i] = true;
			if (Partition(i, k, sumCurr + arr[i], target)) return true;
		}
		choosed[i] = false; // dont choose it anymore;
	}
	return false;
}
bool canPartToKArrays() {
	int sum = 0;
	for (int i = 0; i < n; i++) sum += arr[i];
	if (k == 0 || sum % k != 0) {
		return false;
	}
	return Partition(0, k, 0, sum/k);
}

void solve(){
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>arr[i];
	if (canPartToKArrays()) cout<<1;
	else cout<<0;
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





