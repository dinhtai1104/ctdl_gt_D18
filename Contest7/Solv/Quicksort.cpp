#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void QuickSort(vector<int>&a, int l, int r) {
	if (l <= r) {
		int pivot=(l+r)/2;
		
		int ll=l, rr=r;
		while(ll <= rr) {
			while(a[ll]<a[pivot]) ll++;
			while(a[rr]>a[pivot]) rr--;
			
			if (ll<=rr) {
				swap(a[ll], a[rr]);
				ll++;
				rr--;
			}
		}
		QuickSort(a, l, rr);
		QuickSort(a, ll, r);
	}
}

void Solve() {
	int n;
	cin>>n;
	vector<int>a;
	for (int i=n-1;i>=0;i--) {
		a.push_back(i);
	}
	QuickSort(a, 0, n-1);
	for(auto z:a) cout<<z<<' ';

}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

