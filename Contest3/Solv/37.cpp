#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n, m;
int ke[50][50];
int MAX;
int check[50][50];
vector<pair<int,int> > dinh;


void dfs(int u, int cnt) {
	MAX = max(MAX, cnt);
	for (int i =0;i<n;i++) {
		if (ke[u][i]) {
			ke[u][i]=0;
			ke[i][u]=0;
			dfs(i, cnt + 1);
			ke[u][i]=1;
			ke[i][u]=1;
			
		}
		
	}
}
void solve(){
	MAX = -1;
	for(int i=0;i<50;i++) {
		for(int j=0;j<50;j++) ke[i][j]=0;
	}
	cin>>n>>m;
	for (int i = 0; i < m; i++) {
		int u, v;
		//cin>>u>>v;
		scanf("%d%d",&u,&v);
		ke[u][v]=1;
		ke[v][u]=1;
	}
	for (int i = 0; i < n; i++) {
		dfs(i, 0);
	}
	printf("%d\n",MAX);
}
int main(){
	//btSpeed();
	int t=1;
	scanf("%d",&t);
	while(t--) {
		solve();
	}

	return 0;
}





