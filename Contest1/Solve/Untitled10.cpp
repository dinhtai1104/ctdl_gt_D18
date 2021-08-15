#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int upperBound(ll a[], ll l, ll r, ll key) {
	int index=-1;
	while(l <= r) {
		int mid = (l+r)/2;
		ll midValue = a[mid];
		if (midValue == key) {
			index = mid;
			l = mid + 1;
		} else {
			if (midValue > key) { // tim kiem trai
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
	}
	return index;
}

int lowerBound(ll a[], ll l, ll r, ll key) {
	int index=-1;
	while(l <= r) {
		int mid = (l+r)/2;
		ll midValue = a[mid];
		if (midValue == key) {
			index = mid;
			r = mid - 1;
		} else {
			if (midValue > key) { // tim kiem trai
				r = mid - 1;
			} else {
				l = mid + 1;
			}
		}
	}
	return index;
}
int main(){
	ll n, k, cnt=0;;
	cin>>n>>k;
	ll a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for (int i=0;i<n-2;i++) {
		for (int j=i+1;j<n-1;j++) {
			int value=k-a[i]-a[j];
			int index1 = upperBound(a, j+1, n, value);
			int index2 = lowerBound(a, j+1, n, value);
			if (index1 != -1 && index2 != -1) {
				cnt += index1-index2+1;
			}
			//cout<<index1<<' '<<index2<<endl;
		}
	}
	cout<<cnt;

	return 0;
}

/*

	
	Nho hon | Mid | Lon hon
	            l         r
	Key
	chia doi n/2 n/2/2 => Logn
	1 ti phan tu => BS => ~30
	            => 1 ti buoc
	
	Binary Search // Sap xep 
	Linear Search // Tim kiem tuyen tinh
*/



