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

int binaryS1(vector<int>nums, int s, int e, int key) {
	int res=-1;
	while(s<=e){
		int mid=(s+e)>>1;
		if(nums[mid]==key) {
			res=mid;
			s=mid+1;
		}
		else if (nums[mid]>key) e=mid-1;
		else s=mid+1;
	}
//	if(res>=nums.size()) return res-1;
	return res;
}
int binaryS2(vector<int>nums, int s, int e, int key) {
	int res=-1;
	while(s<=e){
		int mid=(s+e)>>1;
		if(nums[mid]==key) {
			res=mid;
			e=mid-1;
		}
		else if (nums[mid]>key) e=mid-1;
		else s=mid+1;
	}
//	if(res>=nums.size()) return res-1;
	return res;
}


void FixedUpdate(){
	ll n,k,cnt=0;
	cin>>n>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++)cin>>nums[i];
	sort_vect(nums);
	for(int i=0;i<n-1;i++){
		int x=binaryS1(nums,i+1,n-1,k-nums[i]);
		int y=binaryS2(nums,i+1,n-1,k-nums[i]);
		if(x!=-1) {
			cnt += (x-y+1);
		}
	}
	cout<<cnt<<endl;
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





