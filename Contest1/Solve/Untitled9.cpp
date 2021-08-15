#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	ll n,k;
	ll s=0;
	cin>>n>>k;

	vector<ll> a(n);
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(), a.end());
	for (int i=0;i<n;i++) {
		if (k == 0) {
			break;
		}
		if (a[i] < 0) {
			a[i] = -a[i];
			k--;
		} else break;
	}
	ll index_Min=0, Min=99999999;
	for (int i=0;i<n;i++) {
		if (Min > a[i]) {
			Min = a[i];
			index_Min = i;
		}
	}

	if (k > 0) {
		if (k % 2==0) {
			a[index_Min] = a[index_Min];
		} else {
			a[index_Min] = -a[index_Min];
		}
	}
	for (int i=0;i<n;i++) {
		s+=a[i];
	}
	cout<<s;
}
int main(){
	ios_base::sync_with_stdio(0);
	int t=1;
	while(t--) {
		solve();
	}

	return 0;
}





