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


class BST {
    private:
        Node* List;
    public:
        BST(Node*L) {List=L;}
        void Insert(Node* &List,int);
        void Delete(Node*& List,int);
        // duyet
        void NLR(Node*&List);
        void LRN(Node*&List);
        void NRL(Node*&List);
        void RLN(Node*&List);
        void RNL(Node*&List);
        void LNR(Node*&List);



};

void BST::Insert(Node* &List,int value) {
    if (List == NULL) {
        Node *p = makeNode(value);
        List = p;
        List->pLeft = List->pRight = NULL;
        return;
    }
    if (List->value < value) {
        BST::Insert(List->pRight, value);
    } else {
        BST::Insert(List->pLeft, value);
    }
}

void BST::LNR(Node*&List) {
    if (List->pLeft != NULL)
        BST::LNR(List->pLeft);
    cout<<List->value<<' ';
    if (List->pRight != NULL)
        BST::LNR(List->pRight);
}

void BST::LRN(Node*&List) {
    if (List->pLeft != NULL)
        BST::LRN(List->pLeft);
    if (List->pRight != NULL)
        BST::LRN(List->pRight);
    cout<<List->value<<' ';
}

void BST::NLR(Node*&List) {
    cout<<List->value<<' ';
    if (List->pLeft != NULL)
        BST::NLR(List->pLeft);
    if (List->pRight != NULL)
        BST::NLR(List->pRight);
}

void BST::NRL(Node*&List) {
    cout<<List->value<<' ';
    if (List->pRight != NULL)
        BST::NRL(List->pRight);
    if (List->pLeft != NULL)
        BST::NRL(List->pLeft);
}

void BST::RLN(Node*&List) {
    if (List->pRight != NULL)
        BST::RLN(List->pRight);
    if (List->pLeft != NULL)
        BST::RLN(List->pLeft);
    cout<<List->value<<' ';
}

void BST::RNL(Node*&List) {
    if (List->pRight != NULL)
        BST::RLN(List->pRight);
    cout<<List->value<<' ';
    if (List->pLeft != NULL)
        BST::RLN(List->pLeft);
}
void Awake() {}
void Solve() {
	Node *t = NULL;
	BST *tree = new BST(t);
	int n;
	cin>>n;
	for(int i=0,v;i<n;i++) {
		cin>>v;
		tree->Insert(t, v); 
	}
	tree->NLR(t);
	cout<<'\n';
}

int main() {
	int t=1;
	cin>>t;
	while(t--) Solve();
}

