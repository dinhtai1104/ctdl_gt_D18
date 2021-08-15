#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

vector<int> a[1005];
int n, m;

bool check(int i, int color[]){
	queue<int> q;
	q.push(i);
	color[i] = 1;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int i = 0; i < a[t].size(); i++){
			if(color[a[t][i]] == -1){
				color[a[t][i]] = 1 - color[t];
				q.push(a[t][i]);
			}
			else if(color[a[t][i]] == color[t])	return false;
		}
	}
	return true;
}

bool solve(){
	int color[1005];
	
	for(int i = 1; i <= n; i++){
		color[i] = -1;
	}
	for(int i = 1; i <= n; i++){
		if(color[i] == -1){
			if(check(i,color) == false)	return false;
		}
	}
	return true;
}

main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
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
		if(solve())	cout << "YES\n";
		else	cout << "NO\n";
	}
}

