#include<iostream>
#include<cstring>
#include<cmath>
int TC=1;
using namespace std;
void solve() {
	int m,n;
	cin >> m >> n;
	long a[m][n], b[n][m],c[m][m];
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
//	for (int i=0;i<n;i++){
//		for (int j=0;j<m;j++){
//			b[i][j] = a[j][i];
//		}
//	}
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++){
			c[i][j] =0;
			for (int l=0;l<n;l++)
				c[i][j]+=a[i][l]*a[j][l];
		}
	}
	cout<<"Test "<<TC++<<":\n";
	for (int i=0;i<m;i++){
		for (int j=0;j<m;j++)
			cout<<c[i][j]<<" ";
		cout<<"\n";	
	}
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();	

	return 0;
}

