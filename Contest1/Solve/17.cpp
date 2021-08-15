#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) sort(a,a+n)
#define sort_vect(a) sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int arr[]={0,1,2};
void solve(){
	pair<ll, ll> a[3];
	for(int i=0;i<3;i++) {
		cin>>a[i].first>>a[i].second;
		if (a[i].first>a[i].second) {
			swap(a[i].first, a[i].second);
		}
	}
	// 3 HCN thang hang
	if (a[0].second==a[1].second&&a[1].second==a[2].second&&a[0].first+a[1].first+a[2].first=a[0].second) {
		cout<<"YES\n";
		return;
	}
	// 2 Cap + 1 Duoi
	/*
		Hinh 1 2 la phan tren
		Hinh 3 la phan duoi
		---------
	   | 0|   1  |
	    ---------
	   |    2    |
	    ---------
	
	*/
	pair<ll,ll>tmp[3];
	while(next_permutation(arr,arr+3)!=NULL) {
		for(int i=0;i<3;i++) {
			tmp[arr[i]]=a[i];
		}
		if (tmp[0].first==tmp[1].first) {
			int t=tmp[0].second+tmp[1].second;
			if (t==tmp[2].first) {
				if (tmp[2].first==tmp[2].second+tmp[1].first) {
					cout<<"YES\n";
					return;
				} else if (tmp[2].second==tmp[2].first+tmp[1].first){
					cout<<"YES\n";
					return;
				}
			} else if (t==tmp[2].second) {
				if (tmp[2].first==tmp[2].second+tmp[1].first) {
					cout<<"YES\n";
					return;
				} else if (tmp[2].second==tmp[2].first+tmp[1].first){
					cout<<"YES\n";
					return;
				}
			}
		} 
	}
	cout<<"NO\n";
}
void solve_NEW() {
	long long a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	get(a);get(b);get(c);get(d);
	get(e);get(f);
	long long s=a*b+c*d+e*f;
	long long y=ktcp(s);
	if(y==0) cout<<"NO";
	else {
		if(a>b) swap(a,b); // b se la chieu dai, a la chieu rong
		if(c>d) swap(c,d); // d la chieu dai, c la chieu rong
		if(e>f) swap(e,f); // f la chieu dai, e la chieu rong
		if(b==d && d==f && f==y) cout<<"YES";
		else{
				// hcn co chieu dai lon nhat =b
			if(d>b) {
				swap(a,c); 
				swap(b,d);
			}
			if(f>b) {
				swap(a,e); 
				swap(b,f);
			}
			if(b==y){
				if(c+e==y||d+f==y||c+f==y||d+e==y)	cout<<"YES";
				else cout<<"NO";
			}
			else cout<<"NO";
		}
	}	
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





