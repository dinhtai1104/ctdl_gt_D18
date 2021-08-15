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
string s;
vector<string>res;

string reverseStr(string s) {
	for (int i=0;i<s.length()/2;i++){
		swap(s[i], s[s.length() - i - 1]);
	}
	return s;
}

void remove(string s, vector<string>&res, int i_s, int j_e, pair<char, char>character) { //{(, )};
	for (int stack = 0, i = i_s; i < s.length(); i++) {
		if (s[i] == character.first) stack++;
		if (s[i] == character.second) stack--;
		if (stack >= 0) continue;
		for (int j = j_e; j<=i;j++) {
			if (s[j] == character.second && (j == j_e || s[j - 1] != character.second)) {
				remove(s.substr(0, j), res, j + 1, s.length(), {'(', ')'});
			}
		}
		return;
	}
	string re = reverseStr(s);
	if 
}

void solve(){
	cin>>s;
		
}
int main(){
	int t=1;
	//cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





