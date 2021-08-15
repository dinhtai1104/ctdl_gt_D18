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

int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={1,-1,1,-1,2,-2,2,-2};

void awake() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
}

void Loang(int X, int Y) {
	
}

void FixedUpdate(){
	string a,b;
	cin>>a>>b;
	queue<pair<pair<int,int>,int>>q;
	pair<int,int>s,e;
	
	s.first=a[0]-'a'+1;
	s.second=a[1]-'0';
	e.first=b[0]-'a'+1;
	e.second=b[1]-'0';
	//m[s]=0;
	q.push(pair<pair<int,int>,int>(s,0));
	while(!q.empty()) {
		pair<pair<int,int>,int> p = q.front(); q.pop();
		if (p.first == e) {
			//cout<<m[e]<<'\n';
			cout<<p.second<<'\n';
			break;
		}
		for (int i = 0; i < 8; i++) {
			int X = p.first.first + dx[i];
			int Y = p.first.second + dy[i];
			if (X>=1&&X<=8&&Y>=1&&Y<=8) {
				q.push(pair<pair<int,int>,int>(pair<int,int>(X,Y),p.second+1));
			}
		}
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





