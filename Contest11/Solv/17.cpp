#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll MST[1000][1000];

void Floyd() {
	int n, m;
	cin>>n>>m;
	for (int i=0;i<=300;i++){
		for (int j=0;j<=300;j++){
			MST[i][j]=1e9;
		}
		MST[i][i] = 0;
	}
	while(m--) {
		int u,v,w;
		cin>>u>>v>>w;
		MST[u][v]=MST[v][u]=w;
	}
	
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(MST[i][j] > MST[i][k]+MST[k][j]) {
					MST[i][j] = MST[i][k]+MST[k][j];
//					MST[j][i] = MST[i][j];
				}
			}
		}
	}
}



void Solve(){
	int u,v;
	cin>>u>>v;
	cout<<MST[u][v]<<'\n';
}
int main(){
	ll t=1;
	Floyd();
	cin >> t;
	while(t--) {
		Solve();
	}

	return 0;
}
/*
5 6
1 2 6
1 3 7
2 4 8
3 4 9
3 5 1
4 5 2
3
1 5
2 5
4 3
*/




