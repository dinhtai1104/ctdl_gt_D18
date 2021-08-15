#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node {
	int value;
	Node *pLeft, *pRight;
	
	public:
		Node() {
		}
		Node(int value) {
			this->value=value;
			pLeft = pRight = NULL;
		}
		int getValue() {return value;}
		Node* getLeft() {return pLeft;}
		Node* getRight() {return pRight;}
		void setLeft(Node* child) {
			pLeft=child;
		}
		void setRight(Node* child) {
			pRight=child;
		}
		bool isLeaf() {
			return pLeft==NULL&&pRight==NULL;
		}
};
typedef Node* Tree;

void Insert(Tree&list, int val, int parent, char dir) {
	if (list == NULL||list->value == parent) {
		Node *p = new Node(val);
		if (list == NULL) {
			list = new Node(parent);
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
void Awake() {}
vector<int>d;
//bool revese=true;
void RLO(Tree t, bool revese) {
	d.clear();
	if (t!=NULL) {
		stack<Tree>s1,s2;
		s1.push(t);
		while(!s1.empty()||!s2.empty()) {
			while(!s1.empty()) {
				Tree u=s1.top(); s1.pop();
				cout<<u->value<<' ';
				
				if (u->pRight) s2.push(u->pRight);
				if (u->pLeft) s2.push(u->pLeft);
			}
			while(!s2.empty()) {
				Tree u=s2.top(); s2.pop();
				cout<<u->value<<' ';
				if (u->pLeft) s1.push(u->pLeft);
				if (u->pRight) s1.push(u->pRight);
			}
		}
	}
}

void Solve() {
	Tree t = NULL;
	map<int, Node*> m;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int p,s;
		Tree tmp;
		char dir;
		cin>>p>>s>>dir;
		Insert(t,s,p,dir);
//		if (m.find(p)==m.end()) {
//			tmp=new Node(p);
//			m[p]=tmp;
//			if (t==NULL) {
//				t=tmp;
//			}
//		} else {
//			tmp=m[p];
//		}
//		Node* child=new Node(s);
//		if (dir=='L') {
//			tmp->setLeft(child);
//		} else {
//			tmp->setRight(child);
//		}
//		m[s]=child;
	}
	RLO(t,true);
	cout<<'\n';

}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

