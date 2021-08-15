#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long ll;
int x;
bool cmp(int a, int b) {
	if (abs(a - x) < abs(b - x)) return true;
	return false;
	//if (a < b) swap(a, b);
}

int main(){
	x = 0;
	int a[4] = {-1, 0, 2, 4};
	sort(a, a+4, cmp); // giam dan
	
	for (int i=0;i<2;i++) {
		cout<<a[i]<<' ';
	}
	return 0;
}





