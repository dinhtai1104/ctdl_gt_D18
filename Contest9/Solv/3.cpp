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
/*
“PUSHFRONT x”: Thêm ph?n t? x vào d?u c?a dequeue (0 = x = 1000).
“PRINTFRONT”: In ra ph?n t? d?u tiên c?a dequeue. N?u dequeue r?ng, in ra “NONE”.
“POPFRONT”: Xóa ph?n t? d?u c?a dequeue. N?u dequeue r?ng, không làm gì c?.
“PUSHBACK x”: Thêm ph?n t? x vào cu?i c?a dequeue (0 = x = 1000).
“PRINTBACK”: In ra ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, in ra “NONE”.
“POPBACK”: Xóa ph?n t? cu?i c?a dequeue. N?u dequeue r?ng, không làm gì c?
*/
void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

void FixedUpdate(){
	deque<int>q;
	int n;
	cin>>n;
	while(n--){
		string c;
		cin>>c;
		if (c=="PUSHFRONT") {
			int tmp;
			cin>>tmp;
			q.push_front(tmp);
		}
		if (c=="PRINTFRONT") {
			if (q.size()) cout<<q.front()<<"\n";
			else cout<<"NONE\n";
		}
		if (c=="POPFRONT") {
			if (q.size()) q.pop_front();
		}
		if (c=="PUSHBACK") {
			int tmp;
			cin>>tmp;
			q.push_back(tmp);
		}
		if (c=="PRINTBACK") {
			if (q.size()) cout<<q.back()<<"\n";
			else cout<<"NONE\n";
		}
		if (c=="POPBACK") {
			if (q.size()) q.pop_back();
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





