#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int n, m, k;
vector<ppair> ans;
int dem;
set<string> rao;

void solve2(int x, int y, int i){
	queue<ppair> q;
	q.push(ppair(x,y));
	while(!q.empty()){
		ppair t = q.front();
		q.pop();	
		for(int j = 0; j < 4; j++){
			int u = t.fi + dx[j];
			int v = t.se + dy[j];
			int kt = 0;
			for(int l = i + 1; l < ans.size(); l++){
				if(u == ans[i].fi && v == ans[i].se){
					kt = 1;
					char c = u + '0', d = v + '0', e = ans[i].fi + '0', f = ans[i].se + '0';
					string t1 = "";
					t1 = t1 + c + d + e + f;
					string t2 = "";;
					t2 = t2 + e + f + c + d;
					if(rao.find(t1) != rao.end() || rao.find(t2) != rao.end())	dem++;
				}
			}
			if(kt == 0)	q.push(ppair(u,v));
		}
	}
}

void solve(){
	ans.clear();
	dem = 0;
	rao.clear();
	for(int i = 0; i < m; i++){
		char x,y,z,t;
		cin >> x >> y >> z >> t;
		string t1 = "";
		t1 = t1 + x + y + z + t;
		string t2 = "";
		t2 = t2 + z + t + x + y;
		rao.insert(t1);
		rao.insert(t2);
	}
	for(int i = 0; i < k; i++){
		int x, y;
		cin >> x >> y;
		ans.pb(ppair(x,y));
	}
	for(int i = 0; i < ans.size(); i++){
		solve2(ans[i].fi, ans[i].se, i);
	}
	cout << dem << endl;
}

main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		solve();
	}
}

