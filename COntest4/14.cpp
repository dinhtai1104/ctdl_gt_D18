#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define get(n) ll n; cin>>n
#define getStr(s) string s;cin>>s;
#define getStrs(s) string s;getline(cin,s);
#define set_arr(a,n); ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<ll>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define sort_arr(a,n) stable_sort(a,a+n)
#define sort_vect(a) stable_sort(a.begin(),a.end())
#define btSpeed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string toStringNum(ll x) {
	string s = "";
	while(x) {
		s.push_back(x%10 + '0');
		x/=10;
	}
	reverse(s.begin(), s.end());
	return s;
}

vector<string> pre(ll n) {
	ll x = 1;
	vector<string> l3;
	while(x*x*x <= n) {
		l3.push_back(toStringNum(x*x*x));
		x++;
	}
	return l3;
}


void solve(){
	
	ll n;
	cin>>n;
	vector<string> l3 = pre(n);
	reverse(l3.begin(), l3.end());
	string num = toStringNum(n);
	for (int i = 0; i < l3.size(); i++) { 
        string currNum = l3[i]; 
  
        int digitsInCurr = currNum.length(); 
        int index = 0; 
        int digitsInNumber = num.length(); 
        for (int j = 0; j < digitsInNumber; j++) { 
            if (num[j] == currNum[index])  
                index++; 
              
            if (digitsInCurr == index)                  
            {
        		cout<<currNum<<endl;
				return;	    	
			}          
        } 
    } 
	cout<<-1<<endl;
}
int main(){
	int t=1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}





