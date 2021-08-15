#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Awake() {}
void Solve() {
	string s;
	cin>>s;
	stack<int>st;
	
	for (int i=0;i<=s.size();i++) {
		st.push(i+1);
		
		if (i==s.size()||i=='I') {
			while(!st.empty()) {
				cout<<st.top();
				st.pop();
			}
		}
	}
	cout<<'\n';

}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

