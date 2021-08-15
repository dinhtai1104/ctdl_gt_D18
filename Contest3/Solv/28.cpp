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

void Select(vector<int> arr, vector<int> curr, int sum, int index, vector< vector<int> > &s) {
	if (sum <= 0) {
		if (sum == 0) s.push_back(curr);
		return;
	}
	if (index < arr.size()) {
		int value = arr[index];
		curr.push_back(value);
		Select(arr, curr, sum - value, index, s);
		curr.erase(curr.begin() + curr.size() - 1);
		Select(arr, curr, sum, index + 1, s);
	}
}


void solve(){
	
	int n, k;
	vector< vector<int> > res;
	cin>>n>>k;
	vector<int>arr(n);
	vector<int> curr;
	for (int i=0;i<n;i++)cin>>arr[i];
	
	Select(arr, curr, k, 0, res);
	if (res.size()==0) {
		cout<<-1<<endl;
		return;
	}
	for (int i = 0; i < res.size(); i++)  {
		cout<<"[";
		for (int j=0;j<res[i].size()-1;j++) {
			cout<<res[i][j]<<' ';
		}
		cout<<res[i][res[i].size()-1]<<"] ";
	}
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





