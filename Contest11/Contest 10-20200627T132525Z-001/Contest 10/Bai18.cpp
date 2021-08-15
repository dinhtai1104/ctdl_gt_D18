#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
#define pll pair<ll,ll>
const ll INFI = 1e15 + 5;
using namespace std;

int n,m;
vector<ppair> a[100005];
ll dist[100005];
ll cnt[100005];
priority_queue <pll,vector<pll>,greater<pll> > q;


void solve(int u){
	cnt[u] = 1;
	dist[u] = 0;
	q.push({0,u});
	while(!q.empty()){
        ll minn = q.top().fi;
        u = q.top().se;
        q.pop();
        for(int i = 0; i < a[u].size(); i++){
        	ppair tmp = a[u][i];
            int v = tmp.fi;
            int w = tmp.se;
            if(dist[v] == minn + w){
                cnt[v] += cnt[u];
            }
            else if(dist[v] > minn + w){
                dist[v] = minn + w;
                cnt[v] = cnt[u];
                q.push({dist[v],v});
            }
        }
    }
}

main(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y,z;
		cin >> x >> y >> z;
		a[x].pb(ppair(y,z));
		a[y].pb(ppair(x,z));
	}
	for(int i = 1; i <= n; i++){
		dist[i] = INFI;
		cnt[i] = 0;
	}
	solve(1);
	cout << dist[n] << " " << cnt[n] << endl;
}

