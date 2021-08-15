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
int n;
vector<bool>vsted(1005,false);
int truoc[1005];
void reset() {
	for(int i=0;i<1005;i++) ke[i].clear(), vsted[i]=false,truoc[i]=0;
}
void resetVS() {
	for(int i=0;i<1005;i++) vsted[i]=false;
}
bool KT_lienthong() {
	for (int i=1;i<=n;i++) {
		if (!vsted[i]) {
			return false;
		}
	}
	return true;
}
void DFS(int u) {
	vsted[u]=true;
	for (int i=0;i<ke[u].size();i++){
		if (!vsted[ke[u][i]]) {
			DFS(ke[u][i]);
		}
	}
}
void Duyet_dinh_tru_DFS() {
	for (int i=1;i<=n;i++) {
		vsted[i] = true;
		if (i==1)
			DFS(2);
		else DFS(1);
		if(!KT_lienthong()) {
			cout<<i<<" ";
		}
		resetVS();
	}
}
void FixedUpdate(){
	reset();
	int m,s,e;
	cin>>n>>m;
	while(m--){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	Duyet_dinh_tru_DFS();
//	cout<<"YES";
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





