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
vector<int>ke[1005];
vector<bool>vsted(1005,false);

void reset() {
	for(int i=0;i<1005;i++) ke[i].clear(), vsted[i]=false;
}

void DFS(int u) {
	vsted[u]=true;
	cout<<u<<' ';
	for (int i=0;i<ke[u].size();i++){
		if (!vsted[ke[u][i]]) {
			DFS(ke[u][i]);
		}
	}
}

void FixedUpdate(){
	reset();
	int n,m,s;
	cin>>n>>m>>s;
	while(m--){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		//ke[v].push_back(u);
	}
	DFS(s);
	cout<<'\n';
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





