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

ll n, k;
vector< vector<int> > res;
int a[20], dta[20];
void update() {
	ll s= 0;
	for (int i = 0; i < n; i++) s += a[i]*dta[i];
	if (s == k) {
		vector<int> x;
		//cout<<"[";
		for (int i = 0; i < n; i++) {
			if (a[i])  {
				x.push_back(dta[i]);
			}
			
		}	
		res.push_back(x);
		//cout<<"] ";
	}
}
void Try(int i){
	for(int j = 0; j < 2; j++) {
		a[i] = j;
		if (i == n - 1) {
			update();
		} else Try(i + 1);
	}
}

void solve(){
	res.clear();
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>dta[i];
	sort(dta, dta+n);
	Try(0);
	if (res.size() == 0) cout<<-1<<endl;
	else {
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) {
			cout<<'[';
			for (int j = 0; j < res[i].size(); j++) {
				cout<<res[i][j];
				if (j < res[i].size() - 1) cout<<' ';
			}
			cout<<"] ";
		}
		cout<<endl;
	}
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





