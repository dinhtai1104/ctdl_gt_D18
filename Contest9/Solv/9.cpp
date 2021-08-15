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
int a, b;

typedef pair<int,int> node;
#define data first
#define cnt second
void BFS() {
	map<ll,ll> m;
	queue<node>q;
	q.push({a,0});
	int cnt=0;
	while(!q.empty()) {
		node t=q.front();q.pop();
		if (t.data == b) {
			cout<<t.cnt<<'\n';
			return;
		}
		if (t.data*2==b){
			cout<<t.cnt+1<<'\n';
			return;
		}
		if (t.data-1==b) {
			cout<<t.cnt+1<<'\n';
			return;
		}
		if (m[t.data*2]==0&&t.data<=b) {
			m[t.data*2]=1;
			q.push({t.data*2,t.cnt+1});
		}
		if (t.data-1>=0&&m[t.data-1]==0){
			m[t.data-1]=1;
			q.push({t.data-1,t.cnt+1});
		}
	}
}

int Back(int a, int b, int cnt, map<int,int>&m) {
	m[a]=1;
	if (a == b) {
		return cnt;
	}  
	if (a-1==b){
		return cnt+1;
	}
	if (a*2==b){
		return cnt+1;
	}
	if (m[a*2]==0&&a<=b){
		return Back(a*2,b,cnt+1,m);
	} 
	if (a-1>=0&&m[a-1]==0){
		return Back(a-1,b,cnt+1,m);
	}
}

void FixedUpdate(){
	map<int,int>m;

	cin>>a>>b;
//	cout<<DFS(a,b,0)<<'\n';
//	BFS();
	cout<<Back(a,b,0,m)<<"\n";
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





