/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

int n;
Cow a[100004];
struct Cow {
	int hei, pos;
};
void solve(){
    cin >> n;
    stack <int> st,cs;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i].hei>>a[i].pos;
    }
    for(int i = 0 ; i < n ; i++){
        while(!st.empty() && a[i].pos - d > st.top()){
            a[cs.top()] = a[i];
            st.pop();
            cs.pop();
        }
        st.push(a[i]);
        cs.push(i);
    }
    while(!st.empty()){
        a[cs.top()] = -1;
        cs.pop();
        st.pop();
    }
    for(int i = 0 ; i < n ; i++)
        cout << a[i] << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

