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


/*
	Cac TH sai:
	+) (A) 
	+) ((X))

*/
void awake() {

}

string deleteFirst(string s) {
	string res = "";
	stack<char>st;
	stack<int>index;
	int dele[30] = {};
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == '(') {
			int flag = 1;
			if (i == 0 || s[i - 1] != '*' || s[i] != '/' || s[i] != '-') {
				flag = 0;
			}
			while(!st.empty() && st.top() != ')') {
				
				st.pop();
				index.pop();
			}		
			if (!flag) {
				dele[i] = 1;
				dele[index.top()] = 1; 
			}
			st.pop();
			index.pop();
		} else {
			st.push(s[i]);
			index.push(i);
		}
	}
	for (int i = 0; i < s.length(); i++) {
		if (dele[i] == 0) {
			res += s[i];
		}
	}
	return res;
}

string deleteSecond(string s) {
	
}

void FixedUpdate(){
	string s;
	getline(cin, s);
//	if (-deleteFirst(s).length() + s.length() > 2) {
//		cout << "Yes\n";
//	} else {
//		cout<<"No\n";
//	}
	cout << deleteFirst(s) << endl;
	
}
int main(){
	awake();
	int t=1;
	cin >> t; cin.ignore();
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





