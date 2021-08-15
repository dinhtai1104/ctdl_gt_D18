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
int N, K, n, a[20];
vector<string> res;
string tmp;

/*
	0: A 
	1: B
	
	=======
	00
	----
	01
	01000
	----
	
*/

bool checkString(string s) {
	for (int i = 0; i<s.length();i++) {
		int cnt = 0;
		while(s[i] == 'A' && i < s.length()) {
			cnt++;
			i++;
		}
		if (cnt == K) return true;
	} 
	return false;
}

void check() {
	string s = "";
	for (int i = 0; i<n;i++) {
		if (a[i] == 0) s += 'A';
		else s += 'B';
	}
	for (int i = 0; i <= n; i++) {
		string c = s;
		c.insert(i, tmp);
		if (checkString(c)) res.push_back(c);
	}
}

void Dequy(int i) {
	for (int j = 0; j < 2; j++) {
		a[i] = j;
		if (i == n - 1) {
			check();
		} else Dequy(i + 1);
	}
}

void solve(){
	cin>>N>>K;
	n = N - K;
	for (int i=0;i<K;i++) tmp += 'A';
	Dequy(0);
	sort_vect(res);
	cout<<res.size()<<endl;
	for (int i = 0; i < res.size(); i++) {
		cout<<res[i]<<endl;
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





