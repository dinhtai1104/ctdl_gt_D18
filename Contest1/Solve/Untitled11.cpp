#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){

}
#include<algorithm>
int main(){
	int a[] = {1, 2, 5, 6, 7};
	int n=5, value = 3;
	int index1 = upper_bound(a, a+n, value) - a; // tim so dau tien lon hon key
	int index2 = lower_bound(a, a+n,value) - a; // tim so cuoi cung nho hon hoac bang key
	cout<<index1 << ' ' << index2;
	return 0;
}
/*
	a: ||||||||||

*/





