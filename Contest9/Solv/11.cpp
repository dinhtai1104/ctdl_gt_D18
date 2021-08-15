#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 1e5
int isNotPr[(int)1e5+19];
int a,b;
vector<int>pr;
vector<int>ke[10005];
string toString(int num) {
	string s="";
	while(num) {
		s = (char)(num%10+'0')+s;
		num/=10;
	}
	return s;
}

bool check(int a, int b) {
	string xa=toString(a);
	string xb=toString(b);
	int cnt=0;
	for(int i=0;i<4;i++){
		if(xa[i]!=xb[i]) {
			cnt++;
		}
	}
	return cnt==1;
}
void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	isNotPr[0]=isNotPr[1]=1;
	for (int i=2;i<=sqrt(N+19);i++){
		for(int j=i*i;j<N+19;j+=i){
			isNotPr[j]=1;
		}
	}
	for (int i=1000;i<10000;i++) {
		if (!isNotPr[i]) {
			pr.push_back(i);
		}
	}
	
	for (int i=0;i<pr.size()-1;i++) {
		for (int j=i+1;j<pr.size();j++) {
			if (check(pr[i], pr[j])) {
				ke[pr[i]].push_back(pr[j]);
				ke[pr[j]].push_back(pr[i]);
			}
		}
	}
	
//	cout<<pr.size()<<endl;
}




void FixedUpdate(){
	vector<int>pa(1e5+16,0);
	cin>>a>>b;
	queue<int>q;
	q.push(a);
//	found=false;
	while(!q.empty()) {
		int u=q.front();q.pop();
		if(u==b)break;
		for (int i=0;i<ke[u].size();i++){
			int v=ke[u][i];
			if (!pa[v]) {
				q.push(v);
				pa[v]=pa[u]+1;
			}
		}
	}
	
	cout<<pa[b]<<'\n';


}
int main(){
	awake();
	int t=1;
	cin >> t;
	while(t--) {
		FixedUpdate();
	}

	return 0;
}





