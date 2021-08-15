#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node {
	char value;
	Node *pLeft, *pRight;
};

Node* makeNode(char value) {
	Node *p=new Node();
	p->value = value;
	p->pLeft = p->pRight = NULL;
	return p;
}
typedef Node* Tree;

bool isOperator(char s) {
	if (s == '+'||s=='-'||s=='*'||s=='/'||s=='^') return true;
	return false;
}

void Insert(Tree &t, string s) {
	stack<Tree> st;
	for (int i=0;i<s.length();i++){
		if (!isOperator(s[i])) {
			st.push(makeNode(s[i]));
		} else {
			Node* a=st.top(); st.pop();
			Node* b=st.top(); st.pop();
			Node* e=makeNode(s[i]);
			e->pLeft = b;
			e->pRight = a;
			st.push(e);
		}
	}
	t = st.top();
	st.pop();
	
}

void LRN(Tree t) {
	if (t != NULL) {
		LRN(t->pLeft);
		cout<<t->value;
		LRN(t->pRight);
	}
}
void Awake() {}
void Solve() {
	string s;
	cin>>s;
	Tree t;
	Insert(t,s);
	LRN(t);
	cout<<'\n';
	
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

