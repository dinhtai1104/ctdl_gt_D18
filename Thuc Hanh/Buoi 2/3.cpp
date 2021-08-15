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
vector<int>a(100006);
void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void FixedUpdate(){
	int n;
	cin>>n;
	stack<int>num,indx;
	vector<int>count(100005,0);
	for (int i=0;i<n;i++){
		cin>>a[i];
		count[a[i]]++;
	}
	for (int i=0;i<n;i++) {
		while(!num.empty() && count[a[i]] > count[num.top()]) {
			a[indx.top()] = a[i];
			num.pop();
			indx.pop();
		}
		num.push(a[i]); // push lai de xet top
		indx.push(i);
	}
	while(!num.empty()) {
		a[indx.top()] = -1;
		num.pop();
		indx.pop();
	}
	for (int i=0;i<n;i++) {
		cout<<a[i]<<' ';
	}
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





