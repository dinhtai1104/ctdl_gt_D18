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

vector<int>ke[1005];
vector<int>vs(1005,0);
int truoc[1005];

void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

bool cycle=false;

bool DFS(int u, int root) {
	vs[u]=1;
	for(int z:ke[u]) {
		if (!vs[z]) {
			truoc[z]=u;
			return DFS(z,root);
		} 
		else if (vs[z] == 1) {
			
		}
		else {
			if (truoc[root]==z) {
				return true;
			}
		}
	}
	return false;

}

void reset() {
	for (int i=0;i<1005;i++) truoc[i]=-1;
}

void FixedUpdate(){
	cycle=false;
	int n,m;
	cin>>n>>m;
	while(m--) {
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for (int i=1;i<=n;i++){
		reset();
		if (!vs[i]&&DFS(i,i)) {
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
	return;
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





