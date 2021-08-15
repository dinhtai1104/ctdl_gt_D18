#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node {
    int value;
    Node *pLeft, *pRight;
    Node() {
        pLeft = pRight = NULL;
    }
};

Node* makeNode(int value){
    Node *p = new Node();
    p->value = value;
    return p;
}
typedef Node* TREE;

void Insert(TREE&list, int val, int parent, char dir) {
	if (list->value == parent) {
		Node *p = makeNode(val);
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

void NLR(TREE t) {
	if (t != NULL) {
		queue<TREE>q;
		q.push(t);
		while(!q.empty()) {
			Node* u = q.front(); q.pop();
			cout<<u->value<<' ';
			if (u->pLeft!=NULL) q.push(u->pLeft);
			if (u->pRight!=NULL) q.push(u->pRight);
		}
	}
}
void Solve() {
	TREE tree=NULL;
	int n;
	cin>>n;
	int u,v;
	char dir;
	cin>>u>>v>>dir;
	tree = new Node(v);
	if (dir=='L') {
		tree->pLeft = new Node(u);
	} else {
		tree->pRight = new Node(u);
	}
	for (int i=1;i<n;i++) {

		cin>>u>>v>>dir;
		Insert(tree, v, u, dir);
	}
	NLR(tree);
	cout<<'\n';
}

int main() {
	int t=1;
	cin>>t; 
	while(t--) Solve();
}

