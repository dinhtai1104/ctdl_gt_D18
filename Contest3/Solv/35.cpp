#include <iostream>
 
using namespace std;
 
int a[100000] ;
int k , n, s, res;
 
void printResult() { // h� m dùng d? in m?t c?u hình ra ngo� i
    for(int i = 1 ; i <=k ; i++) {
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
}
bool check(int a[], int s)
{
	int sum = 0;
	for (int i = 1; i <= k; i++) sum += a[i];
	if (sum == s) return 1;
	return 0;
}
void backtrack(int i ) { // h� m quay lui
    for(int j = a[i-1]+1 ; j<=n-k+i ; j++ ) { // xét các kh? nang c?a j
        a[i] = j ; // ghi nh?n m?t giá tr? c?a j
        if(i==k) { // n?u c?u hình dã d? k ph?n t?
            // in m?t c?u hình ra ngo� i
           if (check(a, s)) res++;
           //printResult();
        }
        else {
            backtrack(i+1) ; // quay lui
        }
 
    }
}
void toHop() { // h� m li?t kê các t? h?p
    if(k>=0 && k <=n ) {
        a[0] = 0 ; // kh?i t?o giá tr? a[0]
        backtrack(1) ;
    }
}
 
 
int main()
{
	while(1)
	{
	    //cout<<"Nhan k va n: " ;
	    cin>>n>>k >> s;
	    if (n == 0 && k == 0 && s == 0) return 0;
	    toHop();
	    cout << res << endl;;
	    res = 0;
	}
    return 0;
} 
