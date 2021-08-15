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
	stack<int>stk;
	string s;

	while((cin>>s)) {
		if (s == "push") {
			int tmp;
			cin>>tmp;
			stk.push(tmp);
		} else if (s == "show") {
			if (stk.empty()) {
				cout<<"empty\n";
				continue;
			}
			stack<int> tmp = stk;
			vector<int>v1;
			while(!tmp.empty()) {
				v1.push_back(tmp.top());
				tmp.pop();
			}
			for (int i=v1.size()-1;i>=0;i--) {
				cout<<v1[i]<<' ';
			}
			cout<<'\n';
		} else if (s == "pop") {
			if (!stk.empty()) stk.pop();
		}
	}
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





