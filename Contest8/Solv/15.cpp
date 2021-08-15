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
bool isOperator(char x) { 
	switch (x) { 
		case '+': 
		case '-': 
		case '/': 
		case '*': 
			return true; 
	} 
	return false; 
} 
void FixedUpdate(){
	string a;
	cin>>a;
	int len=a.size();
	stack<string>st;
	int cnt=0;
	for (int i=0;i<len;i++) {
		if (isOperator(a[i])) {
		//	if (st.size() > 2) {
				string o1 = st.top(); st.pop();
				string o2 = st.top(); st.pop();
				string tmp = "("+o2+a[i]+o1+")";
				st.push(tmp);
		//	}
		} else {
			string tmp=""+a[i];
			st.push(string(1,a[i]));
		}
	}
	cout<<st.top()<<endl;
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





