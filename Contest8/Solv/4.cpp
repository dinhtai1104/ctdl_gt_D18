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

void FixedUpdate(){
	string s;
	cin>>s;
	stack<char> stk;
	for (int i=0;i<s.length();i++) {
		if (s[i]=='('||s[i]=='['||s[i]=='{') {
			stk.push(s[i]);
			continue;
		}
		
		if (s[i]==')') {
			if (stk.empty()) {
				cout<<"NO\n";
				return;
			}
			if (stk.top()=='(') {
				stk.pop();
			} else {
				cout<<"NO\n";
				return;
			}
		}
		if (s[i]==']') {
			if (stk.empty()) {
				cout<<"NO\n";
				return;
			}
			if (stk.top()=='[') {
				stk.pop();
			} else {
				cout<<"NO\n";
				return;
			}
		}
		if (s[i]=='}') {
			if (stk.empty()) {
				cout<<"NO\n";
				return;
			}
			if (stk.top()=='{') {
				stk.pop();
			} else {
				cout<<"NO\n";
				return;
			}
		}
	}
	if (!stk.empty()) cout<<"NO\n";
	else cout<<"YES\n";
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




