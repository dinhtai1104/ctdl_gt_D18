#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

int n, m;
vector<int> a[100];
bool check[100];

bool DFS(int i, int dem){
	if(dem == n)	return true;
	check[i] = true;
	for(int j = 0; j < a[i].size(); j++){
		if(!check[a[i][j]] && DFS(a[i][j], dem + 1))	return true;
	}
	check[i] = false;
	return false;
}

void solve(){
	memset(check,false,sizeof(check));
	int stop = 0;
	for(int i = 1; i <= n; i++){
		if(DFS(i,1)){
			stop = 1;
			break;
		}
	}
	if(stop == 1)	cout << "1\n";
	else	cout << "0\n";
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			a[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x].pb(y);
			a[y].pb(x);
		}
		solve();
	}
}

