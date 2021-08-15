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

}

int calcu(int a, int b, char c) {
	int xa=a;
	int xb=b;
	if (c == '+') {
		return xa+xb;
	} 
	if (c == '*') {
		return xa*xb;
	}
	if (c == '/') {
		return xa/xb;
	}
	return xa-xb;
}

void FixedUpdate(){
	string s;
	cin>>s;
	int n=s.size();
	int res=0;
	stack<int>ok;
	for (int i=0;i<n;i++) {
		if (isdigit(s[i])) {
			ok.push(s[i]-'0');
		} else {
			int x=ok.top();ok.pop();
			int y=ok.top();ok.pop();
			ok.push(calcu(y,x,s[i]));
		}
	}
	cout<<ok.top()<<endl;
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





