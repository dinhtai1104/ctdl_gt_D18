#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int res=0;
struct Node {
	int value;
	Node *pLeft, *pRight;
};

Node* makeNode(int value) {
	Node *p=new Node();
	p->value = value;
	p->pLeft = p->pRight = NULL;
	return p;
}
typedef Node* Tree;

void Insert(Tree &t, int value) {
	if (t == NULL) {
		Node* p = makeNode(value);
		t=p;
		return;
	}
	if (t->value < value) {
		Insert(t->pRight, value); 
	} else {
		Insert(t->pLeft, value);
	}
}

void LRN(Tree t) {
	if (t != NULL) {
		LRN(t->pLeft);
		LRN(t->pRight);
		if(t->pLeft != NULL || t->pRight != NULL) {
//			cout<<t->value<<' ';
			res++;
		}
	}
}
void Awake() {}
void Solve() {
	res=0;
	Tree t = NULL;
	int n;
	cin>>n;
	
	for (int i=0;i<n;i++){
		int u;
		cin>>u;
		Insert(t, u);
	}
	LRN(t);
	cout<<res<<'\n';
	
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

