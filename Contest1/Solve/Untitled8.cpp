#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*

	=> cac ptu < pivot  ||	pivot || Cac ptu > pivot
	       x(>p)                            y(<p)
	       swap(x, y);
	        low     j     pivot   i   high
*/
void qSort(int a[], int low, int high) {
	if (low < high) {
		int pivot = a[(low + high)/2];
		int i = low, j = high;
		while(i <= j) {
			while(a[i] < pivot) i++;
			while(a[j] > pivot) j--;
			if (i <= j) {
				if (i < j) {
					swap(a[i], a[j]);
				}
				i++;
				j--;
			} else break;
		}
		qSort(a, low, j);
		qSort(a, i, high);
	}
}
#include <algorithm>
// K-nearest neighbors
// K phan tu gan x gan;
// so sanh khoang cach a->x b->x
int x;
bool cmp(int a, int b) {
	if (abs(a-x) < abs(b-x)) return true;
	return false;
}
int main(){
	int a[]={-1, 0, 2, 4};
	x = 0;
	int n=4;
	sort(a, a + n, cmp); // mac dinh tang dan, Sort - compare
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++) cout<< a[i] <<' ';
	return 0;
}





