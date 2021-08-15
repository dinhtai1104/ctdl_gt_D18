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

void FixedUpdate(){
	priority_queue<int>q;
	int d[26]={};
	int k;
	cin>>k;
	string s;
	cin>>s;
	int n=s.size();
	for (int i=0;i<n;i++){
		d[s[i]-'A']++;
	}
	for(int i=0;i<26;i++){
		if(d[i]) q.push(d[i]);
	}
	while(k--) {
		int t=q.top();
		q.pop();
		t--;
//		k--;
		if(t) q.push(t);
	}
	ll res=0;
	while(!q.empty()) {
		int t=q.top();q.pop();
		res+=(ll)t*t;
	}
	cout<<res<<"\n";
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





