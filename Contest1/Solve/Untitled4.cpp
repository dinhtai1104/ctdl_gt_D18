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
void qSort(int a[], int low, int high) {
	if (low < high) {
		int pivot = a[(low+high)/2];
		int i = low, j = high;
		while(low <= high) {
			
			while(pivot > a[i]) i++; // left
			while(pivot < a[j]) j--; // right
			if (i <= j) {
				if (i < j) {
					swap(a[i], a[j]);
					cnt++;
				}
				i++;
				j--;
			} else break;
		}
		// low -> j
		qSort(a, low, j);
		// i->high
		qSort(a, i, high);
	}
}

void solve(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++) cin>>a[i];
	qSort(a, 0, n-1);
	if (cnt % 2 == 0) {
		cout<<1;
	} else cout<<0;
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





