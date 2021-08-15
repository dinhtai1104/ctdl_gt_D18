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
int a[200], matrix[100][100], n, m;
bool ok = true;
int res;
void update() {
	int col = 0, row = 0;
	bool check = false;
	for(int i = 0; i < n + m - 2; i++) {
		if (a[i] == 0) col++;
		else row++;
		if (col >= m || row >= n) {
			check = true;
			break;
		}
	}
	if (!check) {
		ok = false;
//		for (int i = 0;i < n + m - 2; i++){
//			if (a[i]==0) cout<<"D";
//			else cout<<"R";
//		}
//		cout<<" ";
		res++;
	}
}

void Try(int i) {
	for(int j = 0; j < 2; j++){
		a[i] = j;
		if (i == n + m - 3) {
			update();
		}
		else Try(i + 1);
	}
}

void solve(){
	ok = true;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>matrix[i][j];
	}
	if (matrix[0][0] == 0) {
		cout<<-1;
		cout<<endl;
		return;
	}
	Try(0);
	if (ok) cout<<-1; else cout<<res;
	res = 0;
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





