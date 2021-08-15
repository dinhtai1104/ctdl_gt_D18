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

bool NLR(TREE t) {
	int ls,rs;
	if (t==NULL||t->isLeaf()) {
		return true;
	}
	if (NLR(t->pLeft) && NLR(t->pRight)) {
		if (!t->pLeft) {
			ls=0;
		} else if (t->pLeft->isLeaf()) {
			ls=t->pLeft->value;
		} else {
			ls=t->pLeft->value*2;
		}
		
		if (!t->pRight) {
			rs=0;
		} else if (t->pRight->isLeaf()) {
			rs=t->pRight->value;
		} else {
			rs=t->pRight->value*2;
		}
		return (t->value == ls+rs);
	}
}

void Solve() {
	found_err = false;
	TREE tree=NULL;
	int n;
	cin>>n;
	map<int, Node*> m;

	for (int i=0;i<n;i++) {
		Node* tmp;
//		cnted=false;
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
	cout<<NLR(tree)<<'\n';
//	if (found_err) {
//		cout << 0;
//	} else {
//		cout<< 1;
//	}
//	cout<<'\n';
}

int main() {
	int t=1;
	cin>>t; 
	while(t--) Solve();
}

