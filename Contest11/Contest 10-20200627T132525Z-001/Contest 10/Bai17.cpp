#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define pair pair<int, int>
using namespace std;

struct Edge{
	int src, dest, w;
};
int m, d;
Edge a[10005];
int dist[1005];
int ans[105][105];

void solve(int n, int s){
	for(int i = 1; i <= n; i++){
		dist[i] = INT_MAX;
	}
	dist[s] = 0;
	for(int i = 1; i <= n -1; i++){
		for(int j = 0; j < d; j++){
			int u = a[j].src;
			int v = a[j].dest;
			int ww = a[j].w;
			if(dist[u] != INT_MAX && dist[u] + ww < dist[v])
				dist[v] = dist[u] + ww;
		}
	}
	for(int i = 1; i <= n; i++){
		ans[s][i] = dist[i];
	}
}

main(){
	int n;
	cin >> n >> m;
	d = 0;
	memset(ans,0,sizeof(ans));
	for(int i = 0; i < m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		a[d].src = x;
		a[d].dest = y;
		a[d].w = z;
		d++;
		a[d].src = y;
		a[d].dest = x;
		a[d].w = z;
		d++;
	}
	for(int i = 1; i <= n; i++){
		solve(n,i);
	}
	int q;
	cin >> q;
	while(q--){
		int s, f;
		cin >> s >> f;
		cout << ans[s][f] << endl;
	}
}

