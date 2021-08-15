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

/*
1 2 3
4 5 6
=>
4 1 3| 1 5 2
5 2 6| 4 6 3


=>1 2 3 4 5 6
*/
void FixedUpdate(){
	map<vector<int>,int>m;
	vector<int>s(6),e(6);
	for (auto&z:s)cin>>z;
	for (auto&z:e)cin>>z;
	m[s] = 0;
	queue<vector<int>>q;
	q.push(s);
	while(!q.empty()) {
		vector<int> u=q.front();q.pop();
		vector<int> v=u;
		if (v==e) break;
		v[1] = u[4];
		v[2] = u[1];
		v[4] = u[5];
		v[5] = u[2];
		if (m[v]==0) {
			q.push(v);
			m[v]=m[u]+1;
		}
		v=u;
		v[0] = u[3];
		v[1] = u[0];
		v[3] = u[4];
		v[4] = u[1];
		if (m[v]==0) {
			q.push(v);
			m[v]=m[u]+1;
		}
	}
	cout<<m[e]<<"\n";
}
int main(){
	awake();
	int t=1;
//	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





