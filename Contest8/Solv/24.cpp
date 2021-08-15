#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

struct Node {
	ll value, mu;
	Node *pNext;
	
	
};
struct List {
	Node *pHead;
	Node *pTail;
	List() {
		pHead = pTail = NULL;
	}
};
Node* CreateNode(ll _value, ll _heso) {
	Node *p = new Node();
	p->value = _value;
	p->mu = _heso;
	p->pNext = NULL;
	return p;
}
void AddNode(List &list, Node *p) {
	if (list.pHead == NULL)
		list.pHead = list.pTail = p;
	else {
		list.pTail->pNext = p;
		list.pTail = p;
	}
}

vector<string> spit(string s) {
	
}

void solve(){
    string s;
    getline(cin,s);
    s = s;
    List list1,list2,list3;
    int n=s.size();
    for (int i=0;i<n;i++) {
    	ll so=0, mu=0;
    	while(i<n&&s[i]>='0'&&s[i]<='9') {
    		so = so*10+(s[i]-'0');
    		i++;
		}
		while(i<n&&(s[i]=='x'||s[i]=='^'||s[i]=='*')) {
			i++;
		}
		while(i<n&&s[i]>='0'&&s[i]<='9') {
    		mu = mu*10+(s[i]-'0');
    		i++;
		}
		
		if (so != 0)
			AddNode(list1, CreateNode(so, mu));
	}
	//----------
	getline(cin,s);
    n=s.size();
    for (int i=0;i<n;i++) {
    	ll so=0, mu=0;
    	while(i<n&&s[i]>='0'&&s[i]<='9') {
    		so = so*10+(s[i]-'0');
    		i++;
		}
		while(i<n&&(s[i]=='x'||s[i]=='^'||s[i]=='*')) {
			i++;
		}
		while(i<n&&s[i]>='0'&&s[i]<='9') {
    		mu = mu*10+(s[i]-'0');
    		i++;
		}
	
		if (so != 0)
			AddNode(list2, CreateNode(so, mu));
	}
	Node *l1=list1.pHead, *l2=list2.pHead;
	for (; l1!=NULL&&l2!=NULL;) {
		if (l1->mu > l2->mu) {
			AddNode(list3, l1);
			l1=l1->pNext;
		} else if (l1->mu < l2->mu) {
			AddNode(list3, l2);
			l2=l2->pNext;
		} else {
			AddNode(list3, CreateNode(l1->value+l2->value, l1->mu));
			l1=l1->pNext;
			l2=l2->pNext;
		}
	}
	while(l1 != NULL) {
		AddNode(list3, l1);
		l1=l1->pNext;
	}
	while(l2 != NULL) {
		AddNode(list3, l2);
		l2=l2->pNext;
	}
	for (Node *k=list3.pHead; k!=NULL; k=k->pNext) {
		cout<<k->value<<"*x^"<<k->mu;
		if (k->pNext != NULL) cout << " + ";
	}
	cout<<endl;
}

int main(){
//    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1; cin >> t;
    cin.ignore();
    while(t--){solve();}
    return 0;
}
