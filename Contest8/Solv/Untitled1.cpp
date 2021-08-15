#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Awake() {}

int priority_Ope(char x) {
	if (x == '+' || x=='-') return 1;
	if (x=='*'||x=='/'||x=='%') return 2;
	if (x==')' ||x=='(') return 0;
	return 3;
}

bool isOperator(char x) {
	return (x=='+'||x=='-'||x=='*'||x=='/');
}

void Solve() {
	string s;
	stack<char>st;
	cin>>s;
	string res="";
	for (int i=0;i<s.length();i++) {
		char c=s[i];
		if (c==' ') {
			continue;
		}
		if (c=='(') {
			st.push(c);
		} else {
			if (c>='A'&&c<='Z') {
				res+=c;
			} else if (c==')') {
				while(st.top()=='(') {
					if (st.top() != '('&&st.top() !=')')
					res+=st.top();
					st.pop();
				}
				if (st.top()=='(') st.pop();
			} else {
				while(!st.empty()&&priority_Ope(c) <= priority_Ope(st.top())) {
					if (st.top() != '('&&st.top() !=')')
					res+=st.top();
					st.pop();
				}
				st.push(c);
			}
		}
	}
	while(!st.empty()) {
		if (st.top() != '('&&st.top()!=')')
			res+=st.top();
		st.pop();
	}
	cout<<res<<'\n';
}

void Solve1() {
	string s;
	cin>>s;
	stack<string> st;
	// hau to->trung to
	for (int i=0;i<s.length();i++) {
		if (isOperator(s[i])) {
			string a=st.top(); st.pop();
			string b=st.top(); st.pop();
			
			string res="("+b+s[i]+a+")";
			st.push(res);
		} else st.push(string(1, s[i]));
	}
	cout<<st.top()<<'\n';
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

