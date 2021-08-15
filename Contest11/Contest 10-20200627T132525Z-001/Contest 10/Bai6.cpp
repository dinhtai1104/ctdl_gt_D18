#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

vector<int > a[100005];
bool check[100005];

int n ,m;
int maxx;

void BFS(int i){
	int dem = 0;
	queue<int> q;
	q.push(i);
	dem++;
	check[i] = false;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int j = 0; j < a[t].size(); j++){
			if(check[a[t][j]]){
				check[a[t][j]] = false;
				q.push(a[t][j]);
				dem++;
			}
		}
	}
	if(dem > maxx)	maxx = dem;
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		maxx = -1;
		memset(check,true,sizeof(check));
		for(int i = 0; i < m; i++){
			int x, y;
			cin >> x >> y;
			a[x].pb(y);
			a[y].pb(x);
		}
		for(int i = 1; i <= n; i++){
			if(check[i]){
				BFS(i);
			}
		}
		cout << maxx << endl;
		for(int i = 1; i <= n; i++){
			a[i].clear();
		}
	}
}

