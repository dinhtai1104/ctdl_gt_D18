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
	
	void FixedUpdate(){
		priority_queue<ll> q;
		char tmp;
	
		while(cin>>tmp) {
			ll x;
			if (tmp == '+') {
				cin>>x;
				if(q.size() < 15000)
				q.push(x);
				//cout<<x<<endl;
			}
			else if (tmp=='-'){
				if (!q.empty()) {
					ll temp=q.top();
					q.pop();
					while(!q.empty()&&temp == q.top()) {
						q.pop();
					}
				}
			}
	
		}
		vector<ll>res;
		ll temp;
		while(!q.empty()) {
			temp=q.top();
			q.pop();
			while(!q.empty()&&q.top()==temp) {
				q.pop();
			}
			res.push_back(temp);
		}
		cout<<res.size()<<endl;
		for (int i=0;i<res.size();i++){
			cout<<res[i]<<' ';
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
	
	
	
	

