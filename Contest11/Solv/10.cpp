#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


typedef pair<int,int> ii;
typedef pair<int, ii> iii;
int parent[1005];
int _rank[1005];
int Find(int x) {
	if (parent[x] == x) return x;
	return parent[x] = Find(parent[x]);
}

void Join(int u, int v) {
	parent[Find(u)]=Find(v);
}

//bool cmp(Edge a, Edge b) {
//	return a.weight < b.weight; 
//}

void Kruskal() {
	vector<iii> edge;
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		parent[i]=i;
	}
	for (int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edge.push_back({w,{u,v}});
	}
	sort(edge.begin(), edge.end());
	vector<iii>::iterator it;
	int s = 0;
	for (it = edge.begin(); it != edge.end(); it++){
		if (Find(it->second.first) != Find(it->second.second)) {
			s += it->first;
			Join(it->second.first, it->second.second);
		}
	}
	cout<<s<<'\n';
}

void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void FixedUpdate(){
	Kruskal();
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





