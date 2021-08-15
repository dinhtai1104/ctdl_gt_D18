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
	queue<int> q;
	int n;
	cin>>n;
	while(n--){
		string choice;
		cin>>choice;
		switch (choice[choice.size()-1]) {
			case 'H': {
				int tmp;
				cin>>tmp;
				q.push(tmp);
				break;
			}
			case 'P': {
				if (q.size()) q.pop();
				break;
			}
			case 'T': {
				if (q.size()) cout<<q.front()<<'\n';
				else cout<<"NONE\n";
				break;
			}
		}
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





