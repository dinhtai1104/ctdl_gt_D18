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
int Num, n, m;
char matrix[100][100];
int tmp[100][100];

int xqX[]={0, -1, -1, -1, 0, 1, 1, 1};
int xqY[]={1, 1, 0, -1, -1, -1, 0, 1};
int offset = 1000;
vector<string>res;
vector<string> dic;

bool check(string s) {
	for (int i=0;i < dic.size();i++) {
		if (s==dic[i]) return true;
	}
	return false;
}
void Loang(int X, int Y, string &s) {
	tmp[X][Y] = 1;

	s = s + matrix[X][Y];
	if (check(s)) {
		res.push_back(s);

	}
	
	for (int i = 0; i < 8; i++) {
		int x = X + xqX[i];
		int y = Y + xqY[i];
		if ((x >=0 &&x<=n-1) && (y>=0&&y<=m-1)&&!tmp[x][y]) {
			Loang(x,y,s);
		}
	}
	s.erase(s.length() - 1);
	tmp[X][Y] = 0;
}

void solve(){
	cin>>Num;
	cin>>n>>m;
	string s = "";
	dic.resize(Num);
	for(int i=0;i<Num;i++)cin>>dic[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
			tmp[i][j] = 0;
		}
	}
	for (int i=0;i<n; i++) {
		for (int j=0;j<m; j++) {
			Loang(i,j,s);
		}		
	}
	if (res.size()==0) {
		cout<<-1<<endl;
		return;
	}
	for (int i = 0;i<res.size();i++) cout<<res[i]<<' ';
	cout<<endl;
	res.clear();
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





