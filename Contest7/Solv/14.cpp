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
vector<int>sang(1e6+2,0);
vector<int>nguyento;
void awake() {
	sang[0]=sang[1]=1;
	for(int i=2;i<=sqrt(1e6+2);i++) {
		if (sang[i]==0)
			for (int j=i*i;j<1e6+2;j+=i){
				sang[j]=1;
			}
	}
	for(int i=2;i<1e6+2;i++){
		if(!sang[i]) nguyento.push_back(i);
	}
	nguyento.push_back(1e7);
}

void FixedUpdate(){
	int n;
	cin>>n;
	for(int i=0;i<nguyento.size();i++) {
		if (n >= nguyento[i])
			if (!sang[n-nguyento[i]]) {
				cout<<nguyento[i]<<' '<<n-nguyento[i]<<endl;
				return;
			}
	}
	cout<<-1<<endl;
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





