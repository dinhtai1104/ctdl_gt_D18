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
int n;

ll operator % (string a, ll b) {
	ll tmp=0;
	for (int i=0;i<a.length();i++){
		tmp=(tmp*10+(a[i]-'0'));
	}
	return tmp%b;
}

string BFS() {
	queue<string>q;
	q.push("1");
	while(!q.empty()) {
		string res=q.front(); q.pop();
		if (res % n == 0) {
			return res;
		}
		else {
			q.push(res+"0");
			q.push(res+"1");
		}
	}
}

void FixedUpdate(){
	cin>>n;
	cout<<BFS()<<'\n';
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





