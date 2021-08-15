#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool found_err = false;
bool cnted=false;
int res=0;

struct Node {
    int value;
    Node *pLeft, *pRight;
    Node() {
        pLeft = pRight = NULL;
    }
    Node(int v) {
    	value = v;
    	pLeft = pRight = NULL;
	}
};

bool checkFinalRoot(Node *p) {
	if (p == NULL) return false;
	if (p->pLeft == NULL && p->pRight==NULL) return true;
	return false;
}
Node* makeNode(int value){
    Node *p = new Node();
    p->value = value;
    return p;
}
typedef Node* TREE;


void NLR(TREE t) {
	if (t != NULL) {
		if (checkFinalRoot(t->pLeft)) {
			res+=t->pLeft->value;
		}
		NLR(t->pLeft);	
		NLR(t->pRight);

	}
}
void Solve() {
	found_err = false;
	TREE tree=NULL;
	int n;res=0;
	cin>>n;
	map<int, Node*> m;
	for (int i=0;i<n;i++) {
		Node* tmp;
		cnted=false;
		int u,v;
		char dir;
		cin>>u>>v>>dir;
		if (m.find(u)==m.end()) {
			tmp=new Node(u);
			m[u]=tmp;
			if (tree==NULL) {
				tree=tmp;
			}
		} else {
			tmp=m[u];
		}
		Node* child=new Node(v);
		if (dir=='L'){
			tmp->pLeft = child;
		} else {
			tmp->pRight = child;
		}
		m[v]=child;
	}

	NLR(tree);
	cout<<res;
	cout<<'\n';
}

int main() {
	int t=1;
	cin>>t; 
	while(t--) Solve();
}

