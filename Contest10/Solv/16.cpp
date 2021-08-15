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
vector<int>ke[1005];
vector<bool>vsted(1005,false);
int truoc[1005];
void reset() {
	for(int i=0;i<1005;i++) ke[i].clear(), vsted[i]=false, truoc[i]=0;
}

void resetVS() {
	for(int i=0;i<1005;i++) vsted[i]=false;

}

void BFS(int s) {
	queue<int>q;
	q.push(s);
	while(!q.empty()) {
		int u=q.front();q.pop();
		vsted[u]=true;
		for (int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if (!vsted[v]) {
				q.push(v);
				vsted[v]=true;
			}
		}
	}
}

void FixedUpdate(){
	reset();
	int n,m,qe;
	cin>>n>>m;
	while(m--){
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	int dd=0;
	for (int i=1;i<=n;i++) {
		if (!vsted[i]) {
			dd++;
			BFS(i);
		}
	}
	cout<<dd<<'\n';
//	cout<<'\n';
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





