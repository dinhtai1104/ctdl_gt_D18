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
int parent[2005];
int rankx[2005];

int findx(int i){
	if(parent[i] != i)	parent[i] = findx(parent[i]);
	return parent[i];
}


void solve(){
	G.clear();
	for(int i = 0; i < m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		G.pb(pair<int, pair<int, int> >(z, ppair(x,y)));
	}
	for(int i = 1; i <= n; i++){
		parent[i]  = i;
		rankx[i] = 0;
	}
	sort(G.begin(), G.end());
	long long ans = 0;
	for(int i = 0; i < G.size(); i++){
		int u = findx(G[i].se.fi);
		int v = findx(G[i].se.se);
		if(u != v){
			if(rankx[u] == rankx[v])	rankx[u]++;
			if(rankx[u] < rankx[v])	parent[u] = v;
			else	parent[v] = u;
			ans += G[i].fi;
		}
	}
	cout << ans << endl;

}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		solve();
	}
}

