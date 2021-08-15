#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool found_err = false;

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
	bool isLeaf() {
		return (pLeft==NULL&&pRight==NULL);
	}
};
Node* makeNode(int value){
    Node *p = new Node();
    p->value = value;
    return p;
}
typedef Node* TREE;

void Insert(TREE&list, int val, int parent, char dir) {
	if (list == NULL||list->value == parent) {
		Node *p = makeNode(val);
		if (list == NULL) {
			list = makeNode(parent);
		}
		if (dir == 'L') {
			list->pLeft = p;
		} else {
			list->pRight = p;
		}
		return;
	} else {
		if (list->pRight!=NULL)
			Insert(list->pRight, val, parent,dir);
		if (list->pLeft!=NULL)
			Insert(list->pLeft, val,parent,dir);
	}
}

void TEST(TREE t) {
//	if (found_err) return;
	if (t != NULL) {
		queue<TREE> q;
		q.push(t);
		while(!q.empty()) {
			TREE u=q.front(); q.pop();
			if (u->isLeaf()) continue;
			Node* l=u->pLeft;
			Node* r=u->pRight;
			int res=0;
			bool ok;
			if (l!=NULL) ok = true,res+=l->value, q.push(l);
			if (r!=NULL) ok = true,res+=r->value, q.push(r);
//			if (!ok) continue;
			if (res != u->value) {
				cout<<0;
				return;
			}
		}
	}
	cout<<1;
}

bool res=false;

bool NLR(TREE t1, TREE t2) {

	if (!t1&&!t2) return true;
	if (t1&&t2) {
		return (
			t1->value==t2->value && 
			NLR(t1->pLeft,t2->pLeft) &&
			NLR(t1->pRight,t2->pRight)
		);
	}
//	return false;
}

void Solve() {
	found_err = false;
	TREE tree1=NULL;
	TREE tree2=NULL;
	int n;
	cin>>n;
	map<int, Node*> m;

	for (int i=0;i<n;i++) {
		Node* tmp;
//		cnted=false;
		int u,v;
		char dir;
		cin>>u>>v>>dir;
		Insert(tree1,v,u,dir);
	}
	
	cin>>n;
	for (int i=0;i<n;i++) {
		Node* tmp;
//		cnted=false;
		int u,v;
		char dir;
		cin>>u>>v>>dir;
		Insert(tree2,v,u,dir);
	}
	cout<<NLR(tree1, tree2)<<'\n';
}

int main() {
	int t=1;
	cin>>t; 
	while(t--) Solve();
}

