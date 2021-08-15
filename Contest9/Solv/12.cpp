#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define all(x) x.begin(),x.end()

void awake() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int n;
vector<int>ke[10005];
vector<string>a;

bool check(string a, string b){
	int cnt=0;

	for(int i=0;i<a.length();i++){
		if(a[i]!=b[i])cnt++;
	}
	
	return cnt==1;
}
void SetValue() {
	unordered_map<string,int>m;
	for (int i=0;i<n;i++){
		m[a[i]]=i+1;
	}
	for(int i=0;i<n;i++) {
		string b=a[i];
		for (int j=0;j<a[i].length();j++) {
			for(int k=0;k<26;k++){
				b[j]=k+'A';
				if (m[b]&&m[b]!=i+1) {
//					cout<<m[b]<<'\n';
//					cout<<b<<'\n';
					ke[i+1].push_back(m[b]);
					ke[m[b]].push_back(i+1);
//					m[b]=0;
				}
			}
			b=a[i];
		}
	}	
}
void FixedUpdate(){
	a.clear();
	cin>>n;
	a.resize(n);
	string s,e;
	cin>>s>>e;
	for(int i=1;i<=n;i++)ke[i].clear();

	for (auto&z:a)cin>>z;
	
	SetValue();
	
	int ie,is;
	
	for(int i=0;i<n;i++){
		if(a[i]==s) is=i;
		if(a[i]==e) ie=i;
	}
	map<int,int>pa;
	unordered_map<string,int>m;
	for (int i=0;i<n;i++){
		m[a[i]]=i+1;
	}
	is++;ie++;

	queue<int>q;
	pa[is]=1;
	q.push(is);
	while(!q.empty()) {
		int u=q.front(); q.pop();
		if(u==ie) break;

		string s=a[u-1];
	//	if (u == ie) break;
		for (int k=0;k<s.length();k++) {
			for (int j=0;j<26;j++) {
				s[k]=j+'A';
				if (m[s]) {
					if (!pa[m[s]]) {
						q.push(m[s]);
						pa[m[s]]=pa[u]+1;
					}
				}
			}
			s=a[u-1];
		}
			
	}
	cout<<pa[ie]<<'\n';
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





