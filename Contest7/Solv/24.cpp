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

int search(vector<ll>arr, ll l, ll h, ll key) 
{ 
    if (l > h) return -1; 
  
    int mid = (l+h)/2; 
    if (arr[mid] == key) return mid; 
  
    if (arr[l] <= arr[mid]) 
    { 
        if (key >= arr[l] && key <= arr[mid]) 
        return search(arr, l, mid-1, key); 
        return search(arr, mid+1, h, key); 
    } 
    if (key >= arr[mid] && key <= arr[h]) 
        return search(arr, mid+1, h, key); 
  
    return search(arr, l, mid-1, key); 
} 
void FixedUpdate(){
	ll n,key;
	cin>>n>>key;
	vector<ll>a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	int x = search(a,0,n,key);
	cout<<x+1<<endl;
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





