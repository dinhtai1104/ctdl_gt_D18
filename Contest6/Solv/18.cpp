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

bool check(pair<int,int>a, pair<int,int>b) {
	if (a.second < b.first) {
		return true;
	}
	return false;
}

void solve(){
	int n;
	cin>>n;
	vector<pair<int,int> > arr;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		arr.push_back({a,b});
	}
	sort(arr.begin(), arr.end());
//	for(int i=0;i<n;i++){
//		cout<<arr[i].first<<" "<<arr[i].second<<endl;
//	}
	pair<int,int>curr=arr[0];
	bool ok = false;
	int res=0;
	vector<int>cnt(n, 1);
	for(int i=1;i<n;i++){
		for (int j=0;j<i;j++) {
			if (check(arr[j],arr[i])) {
				cnt[i] = max(cnt[j]+1,cnt[i]);
			}
		}
		res = max(res,cnt[i]);
	}
	cout<<res<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





