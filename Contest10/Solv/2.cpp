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
	cin>>n; cin.ignore();
	int ma[100][100]={{}};
	for(int t=1;t<=n;t++) {
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++) {
			int u=0;
			while(i<s.length()&&s[i]!=' '){
				u=u*10+(s[i]-'0');
				i++;
			}
			ma[t][u]=1;
			ma[u][t]=1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(ma[i][j]) {
				ma[i][j]=ma[j][i]=0;
				cout<<i<<" "<<j<<"\n";
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





