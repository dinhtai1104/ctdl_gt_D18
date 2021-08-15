#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Awake() {}

int search(int in[], int n, int root) {
	for (int i=0;i<n;i++) {
		if (in[i]==root) {
			return i;
		}
	}
	return -1;
}


void Recursive(int in[], int pre[], int n) {
	
	int root; // index of root
	
	root = search(in, n, pre[0]);
	
	if (root > 0) {
		Recursive(in, pre + 1, root);
	}
	if (root < n - 1) {
		Recursive(in + root + 1, pre + root + 1, n - root - 1);
	}
	
	cout<<pre[0]<<' ';
}


void Solve() {
	int n;
	cin>>n;
	int in[n], pre[n];
	for (int i=0;i<n;i++) {
		cin>>in[i];
	} 
	for (int i=0;i<n;i++) {
		cin>>pre[i];
	}
	Recursive(in, pre, n);
	
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

