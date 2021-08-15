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

bool binaryS(vector<int>nums, int key) {
	int l=0,r=nums.size();
	while(l<=r) {
		int mid=(l+r)>>1;
		if(nums[mid]==key){
			return true;
		} else if (nums[mid]>key) {
			r=mid-1;
		} else {
			l=mid+1;
		}
	}
	return false;
}

void FixedUpdate(){
	int n,key;
	cin>>n>>key;
	vector<int>a(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	if(binaryS(a, key)) cout<<1;
	else cout<<-1;
	cout<<'\n';
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





