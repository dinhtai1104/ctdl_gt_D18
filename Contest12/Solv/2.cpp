#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node {
	int l,r;
};
bool isOperator(char s) {
	if (s == '+'||s=='-'||s=='*'||s=='/'||s=='^') return true;
	return false;
}
Node mkNode(int l, int r) {
	Node p;
	p.l = l;
	p.r=r;
	return p;
}
int toInt(string s) {
	int res=0;
	for (int i=0;i<s.length();i++) {
		res = res*10+(s[i]-'0');
	}
	return res;
}
void Awake() {}
void Solve() {
	string s;
	int n;
	cin>>n;
	cin.ignore();
	getline(cin, s);
	queue<int>q;
	for (int i=s.length() - 1; i >= 0;i--) {
		if (isOperator(s[i])) {
			int x= q.front(); q.pop();
			int y=q.front(); q.pop();
			if (s[i]=='+') q.push(x+y);
			if (s[i]=='-') q.push(y-x);
			if (s[i] =='*') q.push(x*y);
			if(s[i]=='/') q.push(y/x);
		}
		string res="";
		int t1=0,t2=t1;
		while(i >= 0 && s[i] >= '0'&&s[i]<='9') {
			res = s[i] + res;
			i--;
		}
		if (res.size())
			t1=toInt(res);
		while(i >= 0 && s[i] != ' ') {
			i--;
		}
		res="";
		while(i >= 0 && s[i] >= '0'&&s[i]<='9') {
			i--;
			res = s[i] + res;
		}
		if(res.size())
		t2=toInt(res);
		if (t1)
		q.push(t1);
		if (t2)
		q.push(t2);
	}
	cout<<q.front()<<'\n';
}

int main() {
	int t=1;
	cin>>t; cin.ignore();
	while(t--) Solve();
}

