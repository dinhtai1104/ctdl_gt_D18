#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

vector<int> a[10005];
bool check[10005];
vector<ppair> ans;
int n, m;
int dem;

void BFS(int i){
	queue<int> q;
	q.push(i);
	check[i] = false;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int j = 0; j < a[t].size(); j++){
			if(check[a[t][j]]){
				check[a[t][j]] = false;
				q.push(a[t][j]);
				dem++;
				ans.pb(ppair(t, a[t][j]));
				if(dem == n - 1)	return;
			}
		}
	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		int u;
		cin >> n >> m >> u;
		dem = 0;
		ans.clear();
		memset(check,true,sizeof(check));
		for(int i = 1; i <= n; i++){
			a[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x].pb(y);
			a[y].pb(x);
		}
		BFS(u);
		if(dem < n - 1)	cout << "-1\n";
		else{
			for(int i = 0; i < n - 1; i++){
				cout << ans[i].fi << " " << ans[i].se << endl;
			}
		}
	}
}

