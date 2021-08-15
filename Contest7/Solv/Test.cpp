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

vector<int> hop(vector<int>a,vector<int>b) {
	vector<int>res;
	int i=0,j=0;
	while(i<a.size()&&j<b.size()) {
		if (a[i]<=b[j]) {
			res.push_back(a[i]);
			i++;
		} else {
			res.push_back(b[j]);
			j++;
		}
	}
	while(i<a.size()) res.push_back(a[i++]);
	while(j<b.size()) res.push_back(b[j++]);
	return res;
}

vector<int> Merge(vector<int>a) {
	if (a.size() == 1) {
		return a;
	}
	int mid=a.size()/2;
	vector<int>l,r;
	for(int i=0;i<mid;i++) l.push_back(a[i]);
	for(int i=mid;i<a.size();i++) r.push_back(a[i]);
	l=Merge(l);
	r=Merge(r);
	return hop(l,r);
}


void QuickSort(vector<int>&a,int l,int r) {
	if (l > r) return;
	int left=l, right=r;
	int mid = a[(left+right)/2];
	while(left<=right) {
		while (mid>a[left]) left++;
		while (mid<a[right]) right--;
		if (left<=right) {
			swap(a[left],a[right]);
			left++;
			right--;
		}
//		else break;
	}
	QuickSort(a,l,right);
	QuickSort(a,left,r);
}


void FixedUpdate(){
	int a[]={9,8,7,6,5,-5,-9,10,1};
	vector<int>test(a,a+9);
//	test=Merge(test);
	QuickSort(test, 0, 9); 
	for(int i=0;i<test.size();i++) {
		cout<<test[i]<<' ';
	}
}
int main(){
	awake();
	int t=1;
//	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





