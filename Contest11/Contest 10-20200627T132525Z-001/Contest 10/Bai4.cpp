#include<bits/stdc++.h>
#define M 1000000007
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ppair pair<int, int>
using namespace std;


char a[505][505];
int check[505][505];
int n, m;

bool solve(int Sx, int Sy, int Tx, int Ty){
	queue<ppair> ans;
	ans.push(ppair(Sx, Sy));
	while(!ans.empty()){
		ppair t = ans.front();
		ans.pop();
		int x = t.fi;
		int y = t.se;
		int turn  = check[x][y] + 1;
		if(turn > 2)	continue;
		if(check[Tx][Ty] != -1 && check[Tx][Ty] <= 2)	return true;
		
		for(int i = x + 1; i <= n; i++){
			if(a[i][y] == '*')	break;
			if(check[i][y] == -1 && a[i][y] != '*'){
				check[i][y] = turn;
				ans.push(ppair(i,y));
			}
		}
		
		for(int i = x - 1; i >= 1; i--){
			if(a[i][y] == '*')	break;
			if(check[i][y] == -1 && a[i][y] != '*'){
				check[i][y] = turn;
				ans.push(ppair(i,y));
			}
		}
		
		for(int i = y + 1; i <= m; i++){
			if(a[x][i] == '*')	break;
			if(check[x][i] == -1 && a[x][i] != '*'){
				check[x][i] = turn;
				ans.push(ppair(x,i));
			}
		}
		
		for(int i = y - 1; i >= 1; i--){
			if(a[x][i] == '*')	break;
			if(check[x][i] == -1 && a[x][i] != '*'){
				check[x][i] = turn;
				ans.push(ppair(x,i));
			}
		}
	}
	return false;
}

main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		int Sx, Sy, Tx, Ty;
		memset(check,-1,sizeof(check));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
				if(a[i][j] == 'S'){
					Sx = i;
					Sy = j;
				}
				if(a[i][j] == 'T'){
					Tx = i;
					Ty = j;
				}
			}
		}
		if(solve(Sx, Sy, Tx, Ty))	cout << "YES\n";
		else	cout << "NO\n";
	}
}

