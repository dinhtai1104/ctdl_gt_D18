#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		cout<<s[0];
		for (int i = 0; i < s.length() - 1; i++) {
			if (s[i] != s[i+1])cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
}
