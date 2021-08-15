#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Awake() {}
void Solve() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(auto &z:a) cin>>z;
	stack<int>st;
	
	for(int i=0;i<n;i++) {
		if (st.empty()) {
			st.push(a[i]);
			continue;
		}
		while (!st.empty() && a[i] > st.top()) {
			cout<<a[i]<<' ';
			st.pop();
			//st.push(a[i]);
		}
		st.push(a[i]);
	}
	while(!st.empty()) {
//		int vl=st.top();
		cout<<-1<<' ';
		st.pop();
	}
	cout<<'\n';

}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

