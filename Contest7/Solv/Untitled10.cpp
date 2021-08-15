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

void awake() {

}

vector<int> HopNhat(vector<int>a, vector<int>b) {
	vector<int>res;
	int i=0,j=0;
	while(i<a.size()&j<b.size()) {
		if (a[i]<=b[j]) {
			res.push_back(a[i]);
			i++;
		} else {
			res.push_back(b[j]);
			j++;
		}
	}
	while(i<a.size()) {
		res.push_back(a[i++]);
	}
	while(j<b.size()) {
		res.push_back(b[j++]);
	}
	return res;
}

void MERGE(vector<int>&a) {
	if (a.size()>1) {
		int mid=a.size()/2;
		vector<int>l(a.begin(),a.begin()+mid),r(a.begin()+mid+1,a.end());
		MERGE(l);
		MERGE(r);
		a=HopNhat(l,r);
	}
}

void FixedUpdate(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	MERGE(a);
	for(int i=0;i<n;i++) {
		cout<<a[i]<<' ';
	}
	cout<<endl;
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





