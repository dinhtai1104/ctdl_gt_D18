#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		map<int,int> Vis;
		int x;
		scanf("%d",&x);
		queue<int> q;
		q.push(x);
		Vis[x]=1;
		
		while(q.empty()==false){
			int top=q.front();q.pop();
			int step=Vis[top];
			if(top==1)break;
			for(int i=2;i*i<=top;i++){
				int m=top/i;
				if(Vis[m]==0){
					Vis[m]=step+1;
					q.push(m);
				}
			}
			
			int m=top-1;
			if(Vis[m]==0){
				Vis[m]=step+1;
				q.push(m);
			}
			
		}
		printf("%d\n",Vis[1]);
//		cout<<Vis[1]<<'\n';
	}

}
