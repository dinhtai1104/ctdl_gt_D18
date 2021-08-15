#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Awake() {}
void Solve() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for (int i=1;i<n;i++) {
		if (a[i] <= a[i - 1]) {
			cout<<0<<'\n';
			return;
		}
	}
	cout<<1<<'\n';
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

