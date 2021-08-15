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
	deque<ll> q;
	ll n;
	cin>>n;
	while(n--) {
		int choice;
		cin>>choice;
		switch(choice) {
			case 1: {
				cout<<q.size()<<'\n';
				break;
			}
			case 2: {
				if (!q.size()) cout<<"YES\n";
				else cout<<"NO\n";
				break;
			}
			case 3: {
				ll tmp;
				cin>>tmp;
				q.push_back(tmp);
				break;
			}
			case 4: {
				if (q.size()) q.pop_front();
				break;
			}
			case 5: {
				if (q.size()) cout<<q.front()<<"\n";
				else cout<<-1<<"\n";
				break;
			}
			case 6: {
				if (q.size()) cout<<q.back()<<"\n";
				else cout<<-1<<"\n";
				break;
			}
		}
	}
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





