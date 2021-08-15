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

int solve(int n, int s){
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
	
	for(int j = 0; j < d; j++){
		int u = a[j].src;
		int v = a[j].dest;
		int ww = a[j].w;
		if(dist[u] != INT_MAX && dist[u] + ww < dist[v]){
			return -1;
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << dist[i] << " ";
	}
	cout << endl;
}

main(){
	int t;
	cin >> t;
	while(t--){
		int n, u;
		cin >> n >> m >> u;
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
		solve(n,u);
	}
	
}

