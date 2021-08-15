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

typedef pair<int,int> node;
#define x first
#define y second

void FixedUpdate(){
	int n;
	cin>>n;
	char ke[n+2][n+2];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cin>>ke[i][j];
		}
	}
	node s,e;
	map<node,int>m;
	cin>>s.x>>s.y>>e.x>>e.y;
	queue<node>q;
	m[s]=0;
	q.push(s);
	while(!q.empty()) {
		node u=q.front(); q.pop();
		if(u==e) break;
		
		for(int i=u.x-1;i>=0;i--) {
			if (ke[i][u.y]=='.') {
				if (!m.count({i,u.y})) {
					q.push({i,u.y});
					m[{i,u.y}]=m[u]+1;
				}
			} else break;
		}
		for(int i=u.x+1;i<n;i++) {
			if (ke[i][u.y]=='.') {
				if (!m.count({i,u.y})) {
					q.push({i,u.y});
					m[{i,u.y}]=m[u]+1;
				}
			} else break;
		}
		for(int i=u.y-1;i>=0;i--) {
			if (ke[u.x][i]=='.') {
				if(!m.count({u.x,i})) {
					q.push({u.x,i});
					m[{u.x,i}]=m[u]+1;
				}
			} else break;
		}
		for(int i=u.y+1;i<n;i++) {
			if (ke[u.x][i]=='.') {
				if(!m.count({u.x,i})) {
					q.push({u.x,i});
					m[{u.x,i}]=m[u]+1;
				}
			} else break;
		}
	}
	cout<<m[e]<<'\n';
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





