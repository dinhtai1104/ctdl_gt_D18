#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
#define x first
#define y second

vector<ii> a[10005];
int n, m;
vector<int>d(10005);
int oo = 1e9;
void Dijkstra(int s) {
	priority_queue<ii, vector<ii>, greater<ii>>q;
	q.push({0, s});
	for (int i=1;i<=n;i++){
		d[i]=oo;
	}
	d[s]=0;
	while(q.size()) {
		int u=q.top().y;
		int du=q.top().x;
		q.pop();
		if (d[u] != du) continue;
		for (int i=0;i<a[u].size();i++) {
			int v=a[u][i].y;
			int uv=a[u][i].x;
			if (d[v]>du+uv) {
				d[v]=du+uv;
				q.push({d[v],v});
			}
		}
	}
}

void Awake() {}
void Solve() {
	int s;
	for (int i=0;i<10005;i++) a[i].clear();
//	d.assign(10005, 0);
	cin>>n>>m>>s;
	for (int i=1;i<=m;i++) {
		int u,v,w;
		cin>>u>>v>>w;
		a[u].push_back({w, v});
		a[v].push_back({w, u});
	}
	Dijkstra(s);
	for (int i=1;i<=n;i++) {
		cout<<d[i]<<' ';
	}
	cout<<'\n';
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}
/*
1
9 12 1
1 2 4
1 8 8
2 3 8
2 8 11
3 4 7
3 6 4
3 9 2
4 5 9
4 6 14
5 6 10
6 7 2
6 9 6
*/

