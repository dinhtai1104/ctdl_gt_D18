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

int cnt = 0;
int getPartition(ll a[], ll l, ll r) {
	int pivot = a[r];
	int left = l;
	int right = r - 1;
	while(1) {
		while(left <= right && pivot > a[left]) left++;
		while(right >= left && pivot < a[right]) right--;
		if (left < right) {
			swap(a[left], a[right]);
			cnt++;
			left++;
			right--;
		} else break;
		
	}
	swap(a[left], a[r]);
	//cnt++;
	return left;
}
int vt=0;
ll n, k, x;
void qSort(ll a[], ll l, ll r) {
	if (l < r) {
		int pivot = abs(a[(l+r)>>1]-x);
		int i = l, j = r;
		while(i <= j) {
			while(pivot > abs(a[i]-x)) i++;
			while(pivot < abs(a[j]-x)) j--;
			if (i <= j) {
				if (i < j) {
					cnt++;
				}
				swap(a[i],a[j]);
				i++;
				j--;
			} else break;
		}
		qSort(a, i, r);
		qSort(a, l, j);
		
		cout<<endl;
	}
}
void solve(){
	cin>>n>>k>>x;
	set_arr(a,n);
	qSort(a, 0, n - 1);
	for (int i=0;i<k;i++)
		cout<<abs(a[i]-x)<<' ';

}


int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
		
	}

	return 0;
}





