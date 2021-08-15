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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void FixedUpdate(){
	int n;
	cin>>n;
	queue<int>q;
	map<int,int>m;
	m[n]=0;
	q.push(n);
	bool found=false;
	while(!q.empty()) {
		int u=q.front();q.pop();
		if (u==1)break;
		if (u-1==1) {
			m[1]=m[u]+1;
			break;
		}
		for(int i=2;i*i<=u;i++){
			if(u%i==0){
				if(!m[u/i]) {
					m[u/i]=m[u]+1;
					q.push(u/i);
					if (u/i==1) {
						found=true;
						break;
					}
				}
			}
		}
		if (!m[u-1]) {
			q.push(u-1);
			m[u-1]=m[u]+1;
		}
		if(found) break;
	}
	cout<<m[1]<<'\n';
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





