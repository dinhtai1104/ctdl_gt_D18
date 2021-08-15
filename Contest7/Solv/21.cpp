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

struct Number {
	int data;
	int size;
	int stt;
	Number() {
		data=stt=0;
		size=1;
	}
	Number(int data, int size, int stt) {
		this->data=data;
		this->size=size;
		this->stt=stt;
	}
};

bool cmp(Number a, Number b) {
	if (a.size > b.size) return true;
	if (a.size == b.size && a.data < b.data) return true;
	return false;
}

void awake() {

}

void FixedUpdate(){
	int n;
	cin>>n;
	vector<Number>a;
	for(int i=0;i<n;i++) {
		int x;
		cin>>x;
		bool ok=true;
		for(int j=0;j<a.size();j++) {
			if (a[j].data==x) {
				a[j].size++;
				ok=false;
				break;
			}
		}
		if(ok) {
			Number t(x,1,i);
			a.push_back(t);
		}
	}
	sort(a.begin(),a.end(),cmp);
	for(int i=0;i<a.size();i++) {
		for(int j=0;j<a[i].size;j++){
			cout<<a[i].data<<' ';
		}
	}
	cout<<endl;
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





