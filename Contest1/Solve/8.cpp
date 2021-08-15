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
vector<ll> fibo(85,0);
void preP() {
	fibo[0]=fibo[1]=1;
	for(int i=2;i<85;i++) {
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int TC=1;
void solve(){
	get(n);
	ll gt=0,t=1;
	ll i=0;
    ll a[n+1][n+1];
    cout<<"Test "<<TC++<<":\n";
    ll d = n;
    while(gt <= n*n-1) {
        for(i=t; i<=d; i++) {
            a[t][i] = fibo[gt++];
        }
        for(i=t+1; i<=d; i++) {
            a[i][d] = fibo[gt++];
        }
        for(i=d-1; i>=t; i--) {
            a[d][i] = fibo[gt++];
        }
        for(i=d-1; i>=t+1; i--) {
            a[i][t] = fibo[gt++];
        }
        t++;
        d--; 
    }
    for(int i=1;i<=n;i++) {
    	for(int j=1;j<=n;j++) {
    		cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
}
int main(){
	preP();
	btSpeed();
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





