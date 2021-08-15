#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

vector<pair<int, ppair> > G;
vector<pair<int, ppair> > T;
int n, m;
int parent[200005];
int rank[200005];

int find(int i){
	if(parent[i] != i)	parent[i] = find(parent[i]);
	return parent[i];
}


void solve(){
	G.clear();
	for(int i = 0; i < m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		G.pb(make_pair(z, ppair(x,y)));
	}
	for(int i = 1; i <= n; i++){
		parent[i]  = i;
		rank[i] = 0;
	}
	sort(G.begin(), G.end());
//	cout << endl << endl;
//	for(int i = 0; i < G.size(); i++){
//		cout << G[i].se.fi << " " << G[i].se.se << " " << G[i].fi << endl;
//	}
	long long ans = 0;
	for(int i = 0; i < G.size(); i++){
		int u = find(G[i].se.fi);
		int v = find(G[i].se.se);
		if(u != v){
			if(rank[u] == rank[v])	rank[u]++;
			if(rank[u] < rank[v])	parent[u] = v;
			else	parent[v] = u;
			ans += G[i].fi;
			T.pb(G[i]);
		}
	}
	cout << ans << endl;
//	cout << endl << endl;
//	for(int i = 0; i < T.size(); i++){
//		cout << T[i].se.fi << " " << T[i].se.se << " " << T[i].fi << endl;
//	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		solve();
	}
}

