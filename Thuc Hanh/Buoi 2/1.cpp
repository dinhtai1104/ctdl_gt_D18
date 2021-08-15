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
int n;
int a[100];
void sinh(int j) {
	for (int i=0;i<2;i++) {
		a[j]=i;
		for (int k=0;k<j;k++) {
			if (a[k]==1) cout<<8;
			else cout<<6;
		}
		cout<<' ';
		if (j < n) {
			sinh(j+1);
		}
	}
}

void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void FixedUpdate(){
//	int n;
	cin>>n;
//	sinh(0);
//	ll st = chuyen();
	queue<string>q;
	q.push("6");
	q.push("8");
	while(1) {
		string s = q.front();
		q.pop();
		if (s.length() > n) break;
		cout<<s<<' ';
		q.push(s+"6");
		q.push(s+"8");
	}
	cout<<'\n';
	
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





