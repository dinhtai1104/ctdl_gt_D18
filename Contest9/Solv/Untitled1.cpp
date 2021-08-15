#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	int sodinh;
	cin>>sodinh;
	int socanh;
	cin>>socanh;
	
	int a[sodinh+2][sodinh+2]={{}};
	while(socanh--) {
		int u,v,w;
		cin>>u>>v>>w;
		a[u][v]=w;
//		a[v][u]=1;
	}
	for (int i=1;i<=sodinh;i++) {
		for (int j=1;j<=sodinh;j++) {
			cout<<a[i][j]<<' ';
		}
		cout<<"\n";
	}
	return 0;
}





