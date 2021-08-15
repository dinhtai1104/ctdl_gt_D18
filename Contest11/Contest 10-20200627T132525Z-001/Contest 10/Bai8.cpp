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

void DFS(int i){
	check[i] = false;
	for(int j = 0; j < a[i].size(); j++){
		if(check[a[i][j]]){
			ans.pb(ppair(i,a[i][j]));
			dem++;
			if(dem == n - 1)	return;
			DFS(a[i][j]);
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
		DFS(u);
		if(dem < n - 1)	cout << "-1\n";
		else{
			for(int i = 0; i < n - 1; i++){
				cout << ans[i].fi << " " << ans[i].se << endl;
			}
		}
	}
}

