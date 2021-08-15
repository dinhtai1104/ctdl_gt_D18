#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
char arr[]={'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int findCha(char c) {
	for(int i=0;i<sizeof(arr)/sizeof(char);i++) {
		if (arr[i]==c)
			return i;
	}
}
int returnCost(char c) {
	if (c=='I') return 1;
	if (c=='V') return 5;
	if (c=='X') return 10;
	if (c=='L') return 50;
	if (c=='C') return 100;
	if (c=='D') return 500;
	return 1000;
}
void solve(){
	getStr(s);
	stack<char>st;
	ll tmp=returnCost(s[s.length()-1]), res=tmp;
	ll indez=findCha(s[s.length()-1]);
//	cout<<st.top()<<endl;
	for(int i=s.length()-2;i>=0;i--) {
		if (tmp>returnCost(s[i])) {
			if (indez-findCha(s[i])<=2) {
				res-=returnCost(s[i]);
				indez=findCha(s[i]);
			}
		} else {
			res+=returnCost(s[i]);		
		}
		tmp=returnCost(s[i]);
	}
//	ll res=0;
//	while(!st.empty()) {
//		res+=st.top();
//		st.pop();
//	}
	cout<<res<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





