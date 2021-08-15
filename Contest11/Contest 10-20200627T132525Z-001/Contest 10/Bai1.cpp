#include<bits/stdc++.h>
#define MOD 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

int n, m, M;

vector<int> a[1005];
int color[1005];

bool check(int i, int colorM) 
{ 
   for(int j = 0; j < a[i].size(); j++){
        if(colorM == color[a[i][j]])
            return false;
    }
    return true;
}

bool toMau(int u){
	if(u == n + 1) return true;
    for(int i = 1 ; i <= M ; i++){
        if(check(u,i)){
            color[u] = i;
            if(toMau(u + 1)) return true;
            color[u] = 0;
        }
    }
    return false;
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> M;
		for(int i = 1; i <= n; i++){
			a[i].clear();
		}
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x].pb(y);
			a[y].pb(x);
		}
		for(int i = 1; i <= n; i++){
			color[i] = 0;
		}
		if(toMau(1))	cout << "YES\n";
		else	cout << "NO\n";
	}
}

