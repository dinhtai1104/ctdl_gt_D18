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

vector<int> convert(string s) {
	vector<int> k;
	for(int i=0;i<s.length();i++){
		k.push_back(s[s.length() - i - 1]-'0');
	}
	return k;
}

string operator * (string ka, string kb) {
	ka = "0" + ka;
	kb = "0" + kb;
	vector<int> a=convert(ka), b=convert(kb);
	int n = ka.size(), m = kb.size();
	vector<int>res(n+m-1,0);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			res[i+j]+=a[i]*b[j];
		}
	}
	res.push_back(0);
	res.push_back(0);
	for(int i=0; i< res.size()-1;i++){
		res[i+1]+=res[i]/10;
		res[i] %= 10;
	}
	string s = "";
	for(int i=res.size()-1;i>=0;i--){
		s += (res[i]+'0');
	}
	int i=0;
	while(s[i]=='0')s.erase(0,1);
	return s;
}

string operator + (string a, string b) {
	a="0"+a;
	while(b.size()<a.size()) b="0"+b;
	while(a.size()<b.size()) a="0"+a;

	string s(a.size(),'0');
	int c=0;
	for(int i=a.size()-1;i>=0;i--){
		int x=a[i]-'0',y=b[i]-'0';
		int res=x+y+c;
		c=res/10;
		res%=10;
		s[i]=(res+'0');
	}
	if(s[0]=='0')s.erase(0,1);
	return s;
}
vector<string>res(101,"0");
void awake() {
	res[0]=res[1]="1";
	for (int i=2;i<101;i++){
		for (int j=0;j<i;j++){
			res[i]=res[i]+res[j]*res[i-j-1];
		}
	}
}

void update(){	

	int n;
	cin>>n;
	cout<<res[n]<<endl;
}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		update();
	}

	return 0;
}





