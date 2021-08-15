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
    	this->value = data;
    	pLeft = pRight = NULL;
	}
	
	bool isLeaf() {
		return (pLeft==NULL&&pRight==NULL);
	}
};
typedef Node* TREE;
void Insert(TREE&list, int val, int parent, char dir) {
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
bool found=false;
bool first=false;
int res=0;


void NLR(TREE t, int d) {
	if (t!=NULL) {
		if (t->isLeaf()) {
			if (!first) {
				res=d;
				first=true;
			}
			if (res==d) ;
			else {
				found=true;
				return;
			}
		}
		NLR(t->pLeft, d+1);
		NLR(t->pRight,d+1);
		
	}
}
void Solve() {
	TREE t=NULL;
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		int p,s;
		char dir;
		cin>>p>>s>>dir;
		Insert(t, s, p, dir);
	}
	found=false;
	first=false;
	res=0;
	NLR(t,0);
	cout<<!found<<'\n';
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

