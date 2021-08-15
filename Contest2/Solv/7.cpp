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


void Process(int T[], int X[], int n, int i, vector< vector<int> > &po) {
	for (int j = X[i - 1]; j <= n - T[i-1];j++) {
		T[i] = T[i-1] + j;
		X[i] = j;
		if (T[i]==n) {
			vector<int> m;
			for (int k=i;k>=1;k--) {
				m.push_back(X[k]);
			}
			po.push_back(m);
		} else Process(T, X, n, i + 1,po);
	}
}


bool cmp(vector<int>a, vector<int>b) {
	return a<b;
}
void solve(){
	int T[100]={};
	int X[100]={};
	vector< vector<int> > po;
	get(n);
	T[0] = 0;
	X[0] = 1;
	//cout<<"("<<n<<')'<<' ';
	
	Process(T, X, n, 1, po);
	sort(po.begin(), po.end(), cmp);
	for(int i = po.size()-1;i>=0;i--) {
		cout<<"(";
		for(int j = 0;j < po[i].size();j++){
			cout<<po[i][j];
			if (j != po[i].size()-1)cout<<' ';
		}
		cout<<") ";
	}
//	cout<<endl;
	cout<<endl;
	
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





