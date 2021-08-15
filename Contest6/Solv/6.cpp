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
int manacher(string s) {
    string a;
    for (int i = 0; i < s.length(); i++) a += '.', a += s[i];
    a += '.';
    int n = a.size();

    vector<int> f(n);
    int r = 0, c = 0;

    for (int i=0; i<n; i++) {
        f[i] = i<r? min(r-i, f[c-(i-c)]) : 0;
        while (a[i-f[i]-1] == a[i+f[i]+1]) f[i]++;
        if (i+f[i] > r) {
            r = i + f[i];
            c = i;
        }
    }

    return *max_element(f.begin(), f.end());
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		cout<<manacher(s)<<endl;   
	}
    return 0;
}





