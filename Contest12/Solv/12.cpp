#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
	int value;
	Node *pLeft, *pRight;
	Node() {
		pLeft = pRight = NULL;
	}
	Node(int data) {
		value = data;
		pLeft = pRight = NULL;
	}
	bool isLeaf() {
		return (pLeft==NULL && pRight==NULL);
	}
	bool isFull() {
		if (!this->isLeaf()) {
			return (pLeft!=NULL&&pRight!=NULL);
		}
		return false;
	}
};

typedef Node* Tree;
void Awake() {}

bool found = false;
void NLR(Tree t) {
	if (found) return;
	if (t != NULL) {
		if (!t->isFull()&&!t->isLeaf()) {
			found=true;
			return;
		}
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void Solve() {
	Tree t=NULL;
	found=false;
	int n;
	cin>>n;
	map<int, Node*> m;
	for (int i=0;i<n;i++) {
		Tree tmp;
		int p,s;
		char dir;
		cin>>p>>s>>dir;
		if (m.find(p)==m.end()) {
			tmp = new Node(p);
			m[p]=tmp;
			if (t==NULL)
				t=tmp;
		} else {
			tmp=m[p];
		}
		Tree child=new Node(s);
		if (dir=='L') {
			tmp->pLeft=child;
		} else {
			tmp->pRight=child;
		}
		m[s]=child;
	}
	NLR(t);
	cout<<!found<<'\n';
	
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

