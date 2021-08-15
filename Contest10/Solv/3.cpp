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
int mt[1100][1100];

void FixedUpdate(){
	int n;
	cin>>n;
//	memset(mt,sizeof(mt)/4;0);
	vector<int>ke[n+3];
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mt[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mt[i][j]){
				mt[i][j]=0;mt[j][i]=0;
				ke[i].push_back(j);
				ke[j].push_back(i);
			}
		}
	}
	for(int i=1;i<=n;i++){
		sort(all(ke[i]));
		for(int j=0;j<ke[i].size();j++){
			cout<<ke[i][j]<<" ";
		}
		cout<<"\n";
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





