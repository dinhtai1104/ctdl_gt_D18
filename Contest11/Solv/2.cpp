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
int n,m, Check = 0;
vector<vector<int>>ke;
vector<bool> check(20000);
void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void Hamiton(int u, int count) {
	if (count == n - 1) {
		Check = 1;
		return;
	}
	for (int i=0;i<ke[u].size();i++) {
		int v=ke[u][i];
		if (!check[v]) {
			check[v]=true;
//			if (Hamiton(v, count+1)) return true;
			Hamiton(v, count+1);
			check[v]=false;
		}
	}
//	return false;
}

void FixedUpdate(){
	Check = 0;
	cin>>n>>m;
	check.assign(20000, false);
	ke.resize(n+10);
	for (int i=0,u,v;i<m;i++){
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	for (int i=1;i<=n;i++) {
		Check = 0;
		check.assign(20000, false);
		Hamiton(i, 0);
		if (Check) {
			cout << 1<< '\n';
			return;
		}
	}
	cout<<0<<'\n';
//	cout << Check<<'\n';
//	
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





