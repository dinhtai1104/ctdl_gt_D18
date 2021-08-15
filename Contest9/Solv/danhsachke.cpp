#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int N;
	cin>>N;
	int M;
	cin>>M;
	int mtKe[N+2][N+2]={};
	int vao[N+2]={},ra[N+2]={};
	while(M--) {
		int u,v;
		cin>>u>>v;
		mtKe[u][v]=1;
		vao[v]++;
		ra[u]++;
	}
	for (int i=1;i<=N;i++) {
		cout << "Ban bac ra cua "<< i <<": " << ra[i]<<"\n";
		for (int j=1;j<=N;j++) {
			if (mtKe[i][j]) {
				cout << j << " ";
			}
		}
		cout<<"\n";
		cout << "Ban bac ra cua "<< i <<": " << vao[i]<<"\n";
		for (int j=1;j<=N;j++) {
			if (mtKe[j][i]) {
				cout << j << " ";
			}
		}
		cout<<"\n--------------------\n";
	}
	return 0;
}





