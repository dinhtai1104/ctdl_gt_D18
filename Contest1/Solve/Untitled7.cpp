#include<bits/stdc++.h>
#include<time.h>
using namespace std;
typedef long long ll;


/*
	a = [1, 2, 3]
	b = [4, 5] 
	c = [a ^ b] = [1, 2, 3, 4, 5]
*/
vector<int> hop(vector<int> a, vector<int> b) {
	vector<int> c;
	int i=0, j=0;
	while(i < a.size() && j < b.size()) {
		int xa = a[i];
		int xb = b[j];
		if (xa < xb) {
			c.push_back(xa);
			i++;
		} else {
			c.push_back(xb);
			j++;
		}
	}
	while(i < a.size()) c.push_back(a[i++]);
	while(j < b.size()) c.push_back(b[j++]);
	return c;
}

/*
	x = [4, 3, 2, 1]
	=> [4] [3] [2] [1]
	=> [3,4] [1,2]
	=> [1, 2, 3, 4]
	a = [1]
	b = [3]
	=> hop(a,b) = [1,3]
*/
//quickSort pivot => n^2 [9 8 7 6] = Buble Sort
// Merge Sort [9, 8, 3] => nLogn
vector<int> Sort(vector<int> a) {
	if (a.size() == 1) return a;
	int mid = a.size()/2;
	vector<int>l,r;
	for (int i=0;i<mid;i++) l.push_back(a[i]); //O(n)
	for (int i=mid;i<a.size();i++) r.push_back(a[i]); //O(n)
	l = Sort(l); // l chi con 1 phan tu || Logn
	r = Sort(r); // r chi con 1 phan tu || Logn
	return hop(l, r); // O(n)
	
} 


int main(){
	vector<int> a;
	a.resize(5);
	for (int i=0;i<a.size(); i++) a[i] = rand();
	for (int i=0;i<a.size(); i++) cout<<a[i]<<' ';
	cout<<endl;
	a = Sort(a);
	for (int i=0;i<a.size(); i++) cout<<a[i]<<' ';
	return 0;
}

/*
	QuickSort
	Binary Search
*/



