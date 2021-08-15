#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

int n, m;
int a[105][105];
int parent[105];
int key[105];
bool mstSet[105];

int findKey(){
	int min = INT_MAX, min_index;  
    for (int v = 1; v <= n; v++)  
        if (mstSet[v] == false && key[v] < min)  
            min = key[v], min_index = v;  
  
    return min_index;
}

void solve(){
	for(int i = 1; i <= n; i++){
		key[i] = INT_MAX;
		mstSet[i] = false;
	}
	
	key[1] = 0;
	parent[1] = -1;
	
	for(int i = 0; i < n - 1; i++){
		int u = findKey();
		mstSet[u] = true;
		for(int v = 1; v <= n; v++ ){
			if(a[u][v] && mstSet[v] == false && a[u][v] < key[v]){
				parent[v] = u;
				key[v] = a[u][v];
			}
		}
	}
	long long ans = 0;
	for(int i = 2; i <= n; i++){
		ans += a[i][parent[i]];
	}
	cout << ans << endl;
}

main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(a,0,sizeof(a));
		for(int i = 0; i < m; i++){
			int x, y, z;
			cin >> x >> y >> z;
			a[x][y] = z;
			a[y][x] = z;
		}
		solve();
	}
}

