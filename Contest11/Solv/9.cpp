#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(),x.end()

void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

vector<bool>vsted(10005,false);
vector<vector<int>>ke;
vector<pair<int,int>>caykhung;
void BFS(int s) {
	queue<int>q;
	q.push(s);
	vsted[s]=true;
	while(!q.empty()) {
		s = q.front(); q.pop();
		
		for (int i=0;i<ke[s].size();i++) {
			int v = ke[s][i];
			if (!vsted[v]) {
				vsted[v] = true;
				caykhung.push_back({s,v});
				q.push(v);
			}
		}
	}
}

void FixedUpdate(){
	int n,m,s;
	cin>>n>>m>>s;
	ke.clear();
	caykhung.clear();
	vsted.assign(10005, false);
	ke.resize(n+10);
	for (int i=0,u,v;i<m;i++){
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	BFS(s);
	if (caykhung.size() < n - 1) {
		cout<<-1<<'\n';
		return;
	}
	for (int i=0;i<caykhung.size();i++) {
		cout<<caykhung[i].first <<' '<<caykhung[i].second<<'\n';
	}
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





